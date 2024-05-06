# Algorithm : 
1. The code starts by taking the size of the array n as input. If n is zero, it directly prints 0 and exits as the empty array has a maximum product of 0.
2. It then declares an array nums to store the input numbers and initializes two variables:
- ans to store the maximum product subarray found so far, initialized with the lowest possible integer value (LLONG_MIN)
- dp to store the current product ending at a particular index, initialized with 1 (neutral element for multiplication)
3. The code iterates through the nums array from the beginning (index 0) to the end (index n-1).
4. Inside the loop, it multiplies the current product dp with the current element nums[i]. This effectively calculates the product of a subarray ending at index i.
5. It then compares the current product dp with the previously found maximum product ans and updates ans if the current product is larger.
6. If the current element nums[i] is zero, it resets the current product dp to 1. This is because a zero product effectively breaks any positive product streak and needs a restart from that point.
7. The above steps are performed again, but the traversal changes from end to start.
8. This can be useful in special cases where there are no zeros in the array, and the maximum product subarray might lie at the end.
9. After iterating through the array, the code prints the final value of ans, which holds the maximum product subarray found.