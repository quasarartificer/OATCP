# Algorithm : 
1. Declare a 2D array dp to store the results of subproblems. It has dimensions 101x101 and is initialized with -1.
2. Declare arrays a and b to store the input sequences.
3. Declare variables n and m to store the sizes of sequences a and b, respectively.
4. Define a function fn(int i, int j) to find the length of the longest common subsequence starting from indices i and j of sequences a and b, resp.
5. If either i >= n or j >= m, return 0, indicating the end of one of the sequences.
6. If the result for the current subproblem dp[i][j] is already calculated, return it.
7. Initialize three variables o1, o2, and o3 to store the lengths of subsequences with different scenarios:
- o1: Length of the subsequence if the current elements of a and b can be included (if the absolute difference between a[i] and b[j] is at most 1).
- o2: Length of the subsequence starting from the next element of sequence a.
- o3: Length of the subsequence starting from the next element of sequence b.
8. Return dp[i][j] = max({o1, o2, o3}), the maximum of the lengths calculated in the above steps.
9. In main function, we initialize the dp array with -1 using memset.
10. Read the inputs.
11. Sort both sequences a and b in ascending order.
12. Print the result obtained from fn(0, 0), which gives the length of the longest common subsequence.