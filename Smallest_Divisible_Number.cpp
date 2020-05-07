/*
GeeksforGeeks :
Smallest divisible number
Given a number n the task is to complete the function which returns an integer denoting the smallest number evenly divisible by each number from 1 to n.

Input:
The first line of input contains an integer T denoting the no of test cases then T test cases follow. Each line contains an integer N.

Output:
For each test case output will be in new line denoting the smallest number evenly divisible by each number from 1 to n.

Constraints:
1<=T<=50
1<=n<=25

Example(To be used only for expected output):
Input:
2
3 
6
Output:
6
60
*/

long long gcd(long long a , long long b)
{
    if(a==0)
        return b;
    return gcd(b%a,a);
    
}

long long getSmallestDivNum(long long n)
{
    //Your code here
   long long res =1;
   for(long long i = 2;i<=n;i++)
   {
       res = (res*i)/gcd(res, i);
   }
   return res;
}
