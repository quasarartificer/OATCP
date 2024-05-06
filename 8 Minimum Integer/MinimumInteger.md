# Algorithm : 
- Initialization: A stack st is used to keep track of the digits, and a string ans is initialized to store the final answer.
- Iterating through the number:
The algorithm iterates through each digit of the input number.
If the current digit is smaller than the top of the stack and k is greater than 0, it means we can remove a larger digit from the stack to make the number smaller. This is done in a while loop until the stack is not empty, the current digit is smaller than the top of the stack, and k is greater than 0.
If the stack is empty and the current digit is ‘0’, we skip this digit to avoid leading zeros in the final number.
Otherwise, the current digit is pushed onto the stack.
- Removing extra digits:
If there are still digits to remove after the iteration (k > 0), we pop elements from the stack. This step ensures that if the input number is already in ascending order, we remove the largest digits from the end.
- Building the final answer:
The remaining elements in the stack represent the smallest number possible, but in reverse order. We pop each element and add it to the ans string.
Finally, we reverse the ans string to get the smallest number in the correct order.
- Handling a special cases:
If k is equal to the length of the number, the smallest number possible is ‘0’, as all digits will be removed.