import os
import urllib.request
import json
import re
import datetime
import subprocess

TARGET_DIR = r"D:\leetcode\codechef_practice"

def slugify(text):
    text = text.lower()
    text = re.sub(r'[^a-z0-9]+', '-', text)
    return text.strip('-')

def fetch_problem(code):
    url = f"https://www.codechef.com/api/contests/PRACTICE/problems/{code}"
    req = urllib.request.Request(url, headers={'User-Agent': 'Mozilla/5.0'})
    try:
        res = urllib.request.urlopen(req)
        return json.loads(res.read().decode('utf-8'))
    except Exception as e:
        print(f"Error fetching {code}: {e}")
        return None

def main():
    files = [f for f in os.listdir(TARGET_DIR) if f.endswith('.c') and os.path.isfile(os.path.join(TARGET_DIR, f))]
    
    # Read the current main README.md to get the current row count
    main_readme_path = os.path.join(TARGET_DIR, "README.md")
    if os.path.exists(main_readme_path):
        with open(main_readme_path, "r", encoding="utf-8") as f:
            readme_content = f.read()
    else:
        readme_content = ""
    
    # Find the last problem number
    matches = re.findall(r'^\|\s*(\d+)\s*\|', readme_content, re.MULTILINE)
    if matches:
        problem_count = int(matches[-1])
    else:
        problem_count = 0
        
    current_date = datetime.datetime(2026, 1, 19, 10, 0, 0)
    commits_on_current_day = 0
    
    for filename in sorted(files):
        code = filename[:-2]
        print(f"Processing {code}...")
        
        data = fetch_problem(code)
        if not data:
            continue
            
        problem_name = data.get('problem_name', code)
        difficulty = data.get('difficulty_rating', 'N/A')
        slug = slugify(problem_name)
        
        # Create folder
        problem_dir = os.path.join(TARGET_DIR, slug)
        os.makedirs(problem_dir, exist_ok=True)
        
        # Move file
        old_path = os.path.join(TARGET_DIR, filename)
        new_path = os.path.join(problem_dir, "Solution.c")
        
        # We might have overwritten a manually added CWC23QUALIF.c
        if os.path.exists(new_path) and old_path != new_path:
            os.remove(old_path)
            continue
            
        os.rename(old_path, new_path)
        
        # Build README
        comps = data.get('problemComponents', {})
        readme = f"# {problem_name}\n\n**Difficulty:** {difficulty}\n\n"
        
        statement = comps.get('statement', '')
        if statement:
            readme += f"## Problem Statement\n\n{statement}\n\n"
            
        input_fmt = comps.get('inputFormat', '')
        if input_fmt:
            readme += f"### Input Format\n{input_fmt}\n\n"
            
        output_fmt = comps.get('outputFormat', '')
        if output_fmt:
            readme += f"### Output Format\n{output_fmt}\n\n"
            
        constraints = comps.get('constraints', '')
        if constraints:
            readme += f"### Constraints\n{constraints}\n\n"
            
        samples = comps.get('sampleTestCases', [])
        for idx, sample in enumerate(samples, 1):
            readme += f"### Sample {idx}:\n"
            readme += "```\nInput:\n" + str(sample.get('input', '')) + "\nOutput:\n" + str(sample.get('output', '')) + "\n```\n"
            if sample.get('explanation'):
                readme += f"**Explanation:**\n{sample.get('explanation')}\n\n"
                
        readme_path = os.path.join(problem_dir, "README.md")
        with open(readme_path, "w", encoding="utf-8") as f:
            f.write(readme)
            
        # Update main README
        problem_count += 1
        new_row = f"| {problem_count} | {code} | [{problem_name}](./{slug}/README.md) | [C](./{slug}/Solution.c) | {difficulty} |\n"
        
        with open(main_readme_path, "a", encoding="utf-8") as f:
            f.write(new_row)
            
        # Git commit
        if commits_on_current_day >= 4:
            current_date += datetime.timedelta(days=1)
            commits_on_current_day = 0
            
        commits_on_current_day += 1
        
        date_str = current_date.strftime("%Y-%m-%dT%H:%M:%S")
        
        env = os.environ.copy()
        env['GIT_AUTHOR_DATE'] = date_str
        env['GIT_COMMITTER_DATE'] = date_str
        
        subprocess.run(["git", "add", "."], cwd=TARGET_DIR, env=env)
        subprocess.run(["git", "commit", "-m", f"Add solution for {problem_name}"], cwd=TARGET_DIR, env=env)
        
    print("Done generating commits!")
    
if __name__ == "__main__":
    main()
