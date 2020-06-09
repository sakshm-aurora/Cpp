/*
Convert to Roman No 
Given an integer n, your task is to complete the function convertToRoman which prints the corresponding roman number of n. Various symbols and their values are given below.

I 1
V 5
X 10
L 50
C 100
D 500
M 1000

Input: The first line of each test case contains the no of test cases T. Then T test cases follow. Each test case contains a single integer n.

Output: Complete convertToRoman function and return the roman number representation of n.

Constraints:

1<=T<=100
1<=n<=3999

Example:
Input
2
5
3

Output
V
III 

*/






void convertToRoman(int n) 
{
int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000}; 
    string sym[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"}; 
    int i=12;     
    while(n>0) 
    { 
      int d = n/num[i]; 
      n = n%num[i]; 
      while(d--) 
      { 
        cout<<sym[i]; 
      } 
      i--; 
    } 
}
