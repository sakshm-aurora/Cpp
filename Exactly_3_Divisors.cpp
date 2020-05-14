/*
Exactly 3 Divisors
Given a positive integer value N. The task is to find how many numbers less than or equal to N have numbers of divisors exactly equal to 3.

Input:
The first line contains integer T, denoting number of test cases. Then T test cases follow. The only line of each test case contains an integer N.

Output:
For each testcase, in a new line, print the answer of each test case.

Your Task:
This is a function problem. You only need to complete the function exactly3Divisors() that takes N as parameter and returns count of numbers less than or equal to N with exactly 3 divisors.

Constraints :
1 <= T <= 105
1 <= N <= 109

Example:
Input :
3
6
10
30
Output :
1
2
3

Explanation:
Testcase 1: There is only one number 4 which has exactly three divisors 1, 2 and 4.
Testcase 2: 4 and 9 are the only two numbers less than or equal to 10 that have exactly three divisors.
Testcase 3: 4, 9, 25 are the only numbers less than or equal to 30 that have exactly three divisors.
*/



int exactly3Divisors(int n)
{   bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
    prime[0] = prime[1] = 0; 
  
    for (int p=2; p*p<=n; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
           // Update all multiples of p 
           for (int i=p*2; i<=n; i += p) 
              prime[i] = false; 
        } 
    } 
    int count=0;
    // print squares of primes upto n. 
    for (int i=0;  i*i <= n ; i++) 
        {
            if (prime[i]) 
                if(i*i <= n )
                    {
                        count=count +1;
                    }
        }  
    return count;     
}
