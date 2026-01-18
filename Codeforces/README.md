# Codeforces Solutions

This folder contains my solutions to Codeforces problems.

## Problem Index

| Problem | Solution | Approach / Note |
| :--- | :--- | :--- |
| [1526B - I Hate 1111](https://codeforces.com/contest/1526/problem/B) | [Link](./src/B_I_Hate_1111.cpp) | Any number greater than $11 \times 111 - 11 - 111 = 1099$ can be represented as $11a + 111b$. For $x \le 1099$, I used a brute force check. |
| [282A - Bit++](https://codeforces.com/contest/282/problem/A) | [Link](./src/A_Bit++.cpp) | Only checked for the second characters and incremented/decremented accordingly. |
| [4A - Watermelon](https://codeforces.com/contest/4/problem/A) | [Link](./src/A_Watermelon.cpp) | Loop for every even number $i$ until $n$ and check if $(n - i)$ is also even. |
| [1856B - Good Arrays](https://codeforces.com/contest/1856/problem/B) | [Link](./src/B_Good_Arrays.cpp) | Initialize every element up to $(n - 1)$ of the "Good Array" as $1$ and the last element as $(sum - n + 1)$. For every element where $a_i = b_i$ increment $b_i$ by taking away from the last element. If the last element is less than or equals to 0 (or if there only exists one element) then no "Good Array" exists. |
| [1005B - Delete from the Left](https://codeforces.com/contest/1005/problem/B) | [Link](./src/B_Delete_from_the_Left.cpp) | Find the first instance where $s_i \neq t_i$, starting from the last element of each string. |
| [1354A - Alarm Clock](https://codeforces.com/contest/1354/problem/A) | [Link](./src/A_Alarm_Clock.cpp) | Calculated the extra sleep needed after the first alarm. If the snooze time is less than the reset time, it's impossible. Otherwise, used ceiling division to find the total cycles required. |
| [2149C - MEX rose](https://codeforces.com/contest/2149/problem/C) | [Link](./src/C_MEX_rose.cpp) | Used a frequency table, iterate through every integer $i$ smaller than $k$ and do the operation if $i$ does not exist in the given array by setting any index with the value $k$ as $i$. Add any excess $k$ left into the count of operations. |
| [2149A - Be Positive](https://codeforces.com/contest/2149/problem/A) | [Link](./src/A_Be_Positive.cpp) | Each zero must be changed (cost 1). If the count of negative numbers is odd, it takes 2 extra operations to change a negative to a positive. |

