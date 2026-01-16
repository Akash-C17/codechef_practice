# Chef On Date

**Difficulty:** 294

## Problem Statement

Chef and his girlfriend went on a date. Chef took $X$ dollars with him, and was quite sure that this would be enough to pay the bill. At the end, the waiter brought a bill of $Y$ dollars. Print `"YES"` if Chef has enough money to pay the bill, or `"NO"` if he has to borrow from his girlfriend and leave a bad impression on her.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of a single line of input, containing two space-separated integers $X$ and $Y$.

### Output Format
For each test case, output on a new line `"YES"` if Chef has enough money to pay the bill and `"NO"` otherwise.

You may print each character of the string in either uppercase or lowercase (for example, the strings `"yEs"`, `"yes"`, `"Yes"` and `"YES"` will all be treated as identical).


### Constraints
- $1 \leq T \leq 100$
- $1 \leq X, Y \leq 100$


### Sample 1:
```
Input:
4
1 1
1 2
2 1
50 100

Output:
YES
NO
YES
NO

```
**Explanation:**
**Test case $1$:** Since the money Chef has is equal to the bill, he will be able to pay the bill.

**Test case $2$:** Since the money Chef has is less than the bill, he will have to borrow from his girlfriend and leave a bad impression on her.

**Test case $3$:** Since the money Chef has is greater than the bill, he will be able to pay the bill.

**Test case $4$:** Since the money Chef has is less than the bill, he will have to borrow from his girlfriend and leave a bad impression on her.


