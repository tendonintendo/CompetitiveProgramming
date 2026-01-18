# Codeforces Solutions

This folder contains my solutions to Codeforces problems.

## Problem Index

| Problem | Solution | Approach / Note |
| :--- | :--- | :--- |
| [1526B - I Hate 1111](https://codeforces.com/contest/1526/problem/B) | [Link](./src/B_I_Hate_1111.cpp) | Any number greater than $11 \times 111 - 11 - 111 = 1099$ can be represented as $11a + 111b$. For $x \le 1099$, I used a brute force check. |
| [282A - Bit++](https://codeforces.com/contest/282/problem/A) | [Link](./src/A_Bit++.cpp) | Only checked for the second characters and incremented/decremented accordingly. |
| [4A - Watermelon](https://codeforces.com/contest/4/problem/A) | [Link](./src/A_Watermelon.cpp) | Loop for every even number $i$ until $n$ and check if $(n - i)$ is also even. |
| [1856B - Good Arrays](https://codeforces.com/contest/4/problem/A) | [Link](./src/A_Watermelon.cpp) | Initialize every element up to $(n - 1) of the "Good Array" as $1$ and the last element as $(sum - n + 1)$. For every element where $a_i = b_i$ increment $b_i$ by taking away from the last element. If the last element is less than or equals to 0 (or if there only exists one element) then no "Good Array" exists. |

