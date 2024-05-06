# Dice Sum Combinations

Given a dice with outcomes from 1 to 6, count the number of ways to construct sum n by throwing the dice one or more times.

## Step-by-step Algorithm

1. Initialize a `dp[]` array such that `dp[i]` stores the number of ways we can construct sum = i.
2. Initialize `dp[0] = 1` as there is only 1 way to make sum = 0, that is to not throw any die at all.
3. Iterate `i` from 1 to `X` and calculate the number of ways to make sum = i.
4. Iterate `j` over all possible values of the last die to make sum = i and add `dp[i – j]` to `dp[i]`.
5. After all the iterations, return the final answer as `dp[X]`.
