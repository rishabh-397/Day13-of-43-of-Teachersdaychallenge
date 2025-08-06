# Day13-of-43-of-Teachersdaychallenge

A. Orange (Cocktail)
Problem Description: Given n drinks, where the i-th drink has pi percent orange juice, find the volume fraction of orange juice in a cocktail made by mixing equal proportions of each drink.

Key Idea/Logic:

Since equal proportions are taken from each drink, the total volume fraction of orange juice is simply the arithmetic mean (average) of the individual fractions.

Read the number of drinks n.

Read the n percentages pi into a list or sum them up in a loop.

Calculate the sum of all pi values.

The final percentage is sum / n.

Be careful to use a floating-point data type (like double or float in C++, or default in Python) for the sum and division to ensure the required precision in the output.

Time Complexity: O(N) where N is the number of drinks, as you iterate through the input once to sum the percentages.

Space Complexity: O(1) if you sum the percentages as you read them, or O(N) if you store them in an array.

Example:
Input:

3
50 50 100
Output: 66.666666666667
Explanation: (50 + 50 + 100) / 3 = 200 / 3

 A. Football
Problem Description: Given a string of '0's and '1's representing a football pitch, a situation is considered "dangerous" if there are at least 7 consecutive '0's or 7 consecutive '1's. Determine if the situation is dangerous.

Key Idea/Logic:

This can be solved with a single pass through the string, keeping a running count of consecutive identical characters.

Initialize a count to 1.

Iterate from the second character to the end.

If the current character is the same as the previous one, increment count.

If they are different, reset count to 1.

At each step, check if count is 7 or more. If it is, the situation is dangerous.

If the loop finishes without the count reaching 7, the situation is not dangerous.

Time Complexity: O(L) where L is the length of the string, as you perform a single linear scan.

Space Complexity: O(1) (or O(L) if you store the string).

Example:
Input: 1000000001
Output: YES
Explanation: There are 8 consecutive 

