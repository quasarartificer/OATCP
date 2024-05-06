# Algorithm : 
1. Initialize a DP array dp of size n, initialized to all zeros.
2. Initialize a variable sum to 0.
3. Iterate through the array nums:
4. Incrementally calculate the sum of all elements (sum).
5. Accumulate the sum of i*nums[i] into dp[0].
6. Initialize ans to the value of dp[0].
7. Initialize idx to n-1.
8. Iterate from index 1 to n-1:
9. Update dp[i] using the formula: sum + dp[i-1] - (n*nums[idx]). Here, i acts as the i-th rotation.
10. Decrement idx.
11. Update ans to the maximum of dp[i] and ans.
12. Print ans, which represents the maximum value of rotate function.