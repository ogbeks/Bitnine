# Bitnine
# Question 2 Attempt

Following the Question 2 objective, I made use of VScode & Apache NetBean 18 development environment to write and build the source code.

The code was compile using gcc compiler which is one of the popular compiler used for C/C++ programming.

To compile and run the code, once in the devlopment environment, click on the run button and see the result for the question 2.


Extra Questions

1. I implemented the piecewise recurrence relation using three different method namely
 - Recursive Method
 - Iterative Method
 - Memorization Method

2. The advantages and disadvantages of the three method
 - Recursive Method
 The advantage of the recursive method are simplicity, better readability, elegant and compactible code. It is suitable in breaking down complex problems into smaller subproblem that are ease to solve.
 The disadvantage is in the excessive memory usage and if the nth item is a larger number, it will lead to stack overflow as recursive method have limited stack depth. 

 - Iterative Methods
 I carried out two different iterative method, one with the for loop and array and another with while loop.
 The one with for loop and array uses extra space to store the array O(N) while the while loop using constant space in memory O(1)
 The advantage of iterative method is in the efficient memory usage as in the while loop  and better runtime performance compared to recursive method. It doesn't have stack overflow problem. The disadvantage of using these method include more complexity in the code implementation and readability problem.

 - Memorization Methods 
The advantage of using memorization as addition to either recursive or iterative method is to boost the runtime as we store each sequence value in memory using linkedlist. This help the function to avoid repeating function call. Adapting the use of memorization is a better approach when considering problem that involves recursive action. The disadvantage of using the memorization method is in the complexity of implementation and code readability. It also adviced that the memory should be free after the termination of the programme.




