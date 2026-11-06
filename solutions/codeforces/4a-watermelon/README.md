# Codeforces 4A - Watermelon

## Problem
* **Name:** Watermelon
* **Platform:** Codeforces
* **Problem Link:** [https://codeforces.com/problemset/problem/4/A](https://codeforces.com/problemset/problem/4/A)

## Author
* **Solution by:** Ram Jhydell Balala

## Approach
The problem asks if a watermelon of weight $w$ can be divided into two parts, each having an even number of kilos. 

1. **Even Condition:** Any even number greater than 2 can always be split into two positive even integers (e.g., $4 = 2 + 2$, $6 = 2 + 4$, $8 = 4 + 4$). Therefore, $w$ must be divisible by 2 ($w \% 2 == 0$).
2. **Edge Case ($w = 2$):** The number 2 is even, but it can only be split into $1 + 1$. Since 1 is an odd number, 2 is an invalid input and must output `NO`. Thus, the weight must be strictly greater than 2 ($w > 2$).

## Complexity
* **Time Complexity:** $\mathcal{O}(1)$ — The parity and size checks run in constant time.
* **Space Complexity:** $\mathcal{O}(1)$ — No extra memory is allocated.
