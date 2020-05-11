/*
Given a string check if it is Pangram or not. A pangram is a sentence containing every letter in the English Alphabet.

Input:
First line of input contains of an integer 'T' denoting number of test cases then T test cases follow . Each testcase contains a String 'S'.

Output:
For each test case print in a new line 1 if its a pangram else print 0 .

Your Task:
This is a function problem. You need to complete the function checkPanagram that takes string as parameter and returns true if string is panagram, else it returns false.

Constraints:
1 <= T <= 100
1 <= |S| <= 104

Example:
Input:
2
Bawds jog, flick quartz, vex nymph
sdfs
Output:
1
0

Explanation :
Testcase 1: In the given input , there are all the letters of the english alphabet.Hence, the output is 1.
Testcase 2: In the given input , there aren't all the letters present in the english alphabet. Hence, the output is 0.
*/


bool checkPangram (string &str)
{
#include <bits/stdc++.h> 
using namespace std; 
  
    // Create a hash table to mark the characters 
    // present in the string 
    vector<bool> mark(26, false); 
  
    // For indexing in mark[] 
    int index; 
  
    // Traverse all characters 
    for (int i = 0; i < str.length(); i++) { 
  
        // If uppercase character, subtract 'A' 
        // to find index. 
        if ('A' <= str[i] && str[i] <= 'Z') 
            index = str[i] - 'A'; 
  
        // If lowercase character, subtract 'a' 
        // to find index. 
        else if ('a' <= str[i] && str[i] <= 'z') 
            index = str[i] - 'a'; 
  
        // If this character is other than english 
        // lowercase and uppercase characters. 
        else
            continue; 
  
        mark[index] = true; 
    } 
  
    // Return false if any character is unmarked 
    for (int i = 0; i <= 25; i++) 
        if (mark[i] == false) 
            return (false); 
  
    // If all characters were present 
    return (true); 
}
