/*
Anagram
Given two strings a and b consisting of lowercase characters. The task is to check whether two given strings are anagram of each other or not. An anagram of a string is another string that contains same characters, only the order of characters can be different. For example, “act” and “tac” are anagram of each other.

Input:
The first line of input contains an integer T denoting the number of test cases. Each test case consist of two strings in 'lowercase' only, in a single line.

Output:
Print "YES" without quotes if the two strings are anagram else print "NO".

User Task:
The task is to complete the function  isAnagram() which checks if the two strings are anagram of each other. The function returns true if the strings are anagram else it returns false.

Constraints:
1 ≤ T ≤ 300
1 ≤ |s| ≤ 105

Example:
Input:
2
geeksforgeeks forgeeksgeeks
allergy allergic
Output:
YES
NO

Explanation:
Testcase 1: Both the string have same characters with same frequency. So, both are anagrams.
Testcase 2: Characters in both the strings are not same, so they are not anagrams.
*/



bool isAnagram(string c, string d){
    
        if(c.length()!=d.length())
        {
            return false;
        }
        else
        {
            sort(c.begin(),c.end());
            sort(d.begin(),d.end());
            if(c != d)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
}
