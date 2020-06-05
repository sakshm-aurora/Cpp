/*
Given a non-empty sequence of characters, return true if sequence is Binary, else return false

Input:

The task is to complete the method that takes a string as argument. We should not read any input from stdin/console. There are multiple test cases. For each test case, this method will be called individually.

Output:
Your function should return true str is binary, else false

Constraints:
1 <=T<= 50
1 <=Length of str<= 10000

Example:

Input:
2
101
75

Output:
1
0



*/


bool isBinary(string str)
{
   // Your code here
    for(int i=0;i<str.length();i++)
    {
        if((str[i]!='0'&&str[i]!='1'))
        return 0;
    }
    return 1;
   
   
}
