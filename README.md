# Josephus-Problem-Vectors
*Initally coded in January, 2021.* \
The following came up in a Data Structures and Algorithms course:

![](https://github.com/bi-yotch/Josephus-Problem-Vectors/blob/main/TheProblem.png)

## Explanation
Since our aim was to primarily focus on the safe position number, I used a **Vector** instead of a **Linked List** even though it would be a more practical representation of the problem. 

First, I manually tried initial values of the question to look for a pattern.

![](https://github.com/bi-yotch/Josephus-Problem-Vectors/blob/main/Notes.jpeg)

The one step method to find the solution for n number of people that I have implemented is `2 * (n % i) + 1`, where i is the largest 2^k value less than n. Since we know that the safe position will be in an odd position, we use the `2m + 1` formula to get the position.\
\
For example, when **n = 7**, we have **i = 2^2 = 4**, and **7 % 4 = 3**.\
So **m = 3**, this means that we're looking at the 3rd odd number.\
**2m + 1 = 2\*3 + 1 = 7**.

We see that this is true from my Notes above.

## Sample Output
![](https://github.com/bi-yotch/Josephus-Problem-Vectors/blob/main/SampleOutput.png)
