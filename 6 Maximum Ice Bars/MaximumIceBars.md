# Algorithm : 
- Sort Costs:
The sort function is used to sort the costs array in ascending order. This ensures you prioritize buying the cheapest ice creams first.
- Initialize Variables:
total_bars: This variable keeps track of the total number of ice creams you can buy. It's initialized to 0.
- Iterate Through Costs:
The code uses a for loop to iterate through the costs array.
- Buy Ice Cream (if affordable):
Inside the loop, it checks if you have enough money (initial_coins) to buy the current ice cream (costs[i]).
1. If yes:
You "buy" the ice cream by subtracting its cost from your remaining money (initial_coins -= costs[i]).
You increment the total_bars counter to reflect the purchase.
2. If no:
The loop breaks because you can't afford any more ice creams with the remaining money.
- Finally, we print the output.