# Clear Day

**Difficulty:** 233

## Problem Statement

Chef classifies a day to be either rainy, cloudy, or clear.
In a particular week, Chef finds `X` days to be rainy and `Y` days to be cloudy. Find the number of clear days in the week.

### Input Format
The first and only line of input will contain two space-separated integers `X` and `Y`, denoting the number of rainy and cloudy days in the week.

### Output Format
Output the number of clear days in the week.

### Constraints
* `0 <= X, Y <= 7`
* `0 <= X + Y <= 7`

### Sample 1:
```
Input:
2 3

Output:
2
```
**Explanation:**
There are 7 days in a week. If there are 2 rainy days and 3 cloudy days, then the remaining 7 - 2 - 3 = 2 days are clear.

### Sample 2:
```
Input:
3 4

Output:
0
```
**Explanation:**
If there are 3 rainy days and 4 cloudy days, then the remaining 7 - 3 - 4 = 0 days are clear.
