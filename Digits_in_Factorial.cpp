/*
Digits In Factorial
Given an integer N. The task is to find the number of digits that appear in its factorial, where factorial is defined as, factorial(n) = 1*2*3*4……..*N and factorial(0) = 1.

Input:
The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consist of one line. The first line of each test case consists of an integer N.

Output:
Corresponding to each test case, in a new line, print the number of digits that appear in its factorial.

Your Task:
This is a function problem. You only need to complete the function digitsInFactorial() that takes N as parameter and returns number of digits in factorial of N.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 104

Example:
Input:
2
5
120
Output:
3
199

Explanation:
Testcase 1: Factorial of 5 is 120. Number of digits in 120 is 3 (1, 2, and 0).
Testcase 2: Number of digits in 120! is 199.

*/


int digitsInFactorial(int N)
{
    int i;
    if (N < 0) 
        return 0; 
  
    if (N <= 1) 
        return 1; 
  
    double digits = 0; 
    for (int i=2; i<=N; i++) 
        digits += log10(i); 
  
    return floor(digits) + 1; 
} 
