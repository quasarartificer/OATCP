# Algorithm : 
- The algorithm essentially iterates through the nums vector and keeps track of the range [1, sum] which is currently covered. If the next number in the sequence is present in nums, it extends the range by updating the sum. If not, it patches the sequence by adding the next number to the sum (which is sum+1) and increments the ans.
- The algorithm ensures that all numbers from 1 to n are covered efficiently using the numbers in the nums vector.
-This approach leverages the fact that nums is sorted and avoids redundant additions.