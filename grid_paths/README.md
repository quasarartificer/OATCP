# Grid Pathfinding

Consider an N X N grid whose squares may have traps. It is not allowed to move to a square with a trap. Your task is to calculate the number of paths from the upper-left square to the lower-right square. You can only move right or down.

## Step-by-step Algorithm

1. Maintain a `dp[][]` array such that `dp[i][j]` stores the number of ways to reach cell(i, j) from cell(0, 0).
2. Initialize all the cells of `dp[][]` array with 0.
3. Fill the first row with 1s starting from (0, 0) till we encounter a blocked cell.
4. Fill the first column with 1s starting from (0, 0) till we encounter a blocked cell.
5. For all the other cells (i, j):
   - If the cell is blocked, `dp[i][j]` = 0.
   - If the cell is empty, `dp[i][j]` = `dp[i – 1][j]` + `dp[i][j – 1]`.
6. After all the iterations, return `dp[N-1][N-1]` as the final answer.
