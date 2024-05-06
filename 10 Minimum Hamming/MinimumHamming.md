## Algorithm : 
- Input: The algorithm takes a list of integers as input.
- Iterate over bit positions: The algorithm iterates over each bit position in the integers. There are 32 bit positions since the integers are assumed to be 32-bit integers.
- Count ones and zeros: For each bit position, the algorithm counts the number of integers that have a 1 in that position and the number of integers that have a 0 in that position.
- Calculate contribution to minimum Hamming distance: The contribution of the current bit position to the minimum Hamming distance is the product of the number of ones and the number of zeros at that position. This is because if there are more ones at a particular bit position, then flipping all the zeros to ones (or vice versa) will result in a smaller Hamming distance for the integers that have a 0 at that position (or vice versa).
- Sum contributions: The algorithm sums the contributions of all the bit positions to get the minimum Hamming distance.