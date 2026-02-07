# Chef and Wire Frames

**Difficulty:** 383

## Problem Statement

Chef has a rectangular plate of length  $N cm$  and width $M cm$. He wants to make a wireframe around the plate. The wireframe costs $X$ rupees per cm. 

Determine the cost Chef needs to incur to buy the wireframe.



### Input Format
- First line will contain $T$, the number of test cases. Then the test cases follow.
- Each test case consists of a single line of input, containing three space-separated integers $N,M,$ and $X$ — the length of the plate, width of the plate, and the cost of frame per cm.




### Output Format
For each test case, output in a single line, the price Chef needs to pay for the wireframe.



### Constraints
- $1 \leq T \leq 1000$
- $1 \leq N,M,X \leq 1000 $

### Sample 1:
```
Input:
3
10 10 10
23 3 12
1000 1000 1000

Output:
400
624
4000000
```
**Explanation:**
**Test case $1$:** The total length of the frame is $2\cdot 10 + 2\cdot 10 = 40$ cms. Since the cost is $10$ per cm, the total cost would be $10 \cdot 40 = 400$.

**Test case $2$:** The total length of the frame is $2\cdot 23 + 2\cdot 3 = 52$ cms. Since the cost is $12$ per cm, the total cost would be $52 \cdot 12 = 624$.

**Test case $3$:** The total length of the frame is $2\cdot 1000 + 2\cdot 1000 = 4000$ cms. Since the cost is $1000$ per cm, the total cost would be $4000 \cdot 1000 = 4000000$.


