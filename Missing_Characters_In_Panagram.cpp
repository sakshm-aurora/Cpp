/*
Missing Characters in Panagram 
You are given a string s. You need to find the missing characters in the string to make a panagram.
Note: The output characters will be lowercase and lexicographically sorted.

Input Format: The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains one line of input containing s.

Output Format: For each testcase, in a new line, print -1 if the string is already a panagram, else print the missing characters.

Your Task: This is a function problem. You only need to complete the function misssingPanagram that takes s as parameter and returns -1 if the string is a panagram, else it returns a string that consists missing characters. The newline is provided by the driver code.

Constraints:
1 <= T <= 100

Sample Input:
2
Abcdefghijklmnopqrstuvwxy
Abc
Sample Output:
z
defghijklmnopqrstuvwxyz

Explanation:
Testcase 1: Here all the characters from a to z are present except z.
*/





string missingPanagram(string str){

 //Your code here
 vector<bool> mark(26, false); 
    int index; 
    string res = "";
  
    for (int i = 0; i < str.length(); i++) { 
  
        
        if ('A' <= str[i] && str[i] <= 'Z') 
            index = str[i] - 'A'; 
  
      
        else if ('a' <= str[i] && str[i] <= 'z') 
            index = str[i] - 'a'; 
  
        
        else
            continue; 
  
        mark[index] = true; 
    } 
  for (int i = 0; i < 26; i++) 
    {    
        if (mark[i] == false) 
            res.push_back((char)(i + 'a'));
    }
    if(res == "")
    {
        return "-1";
    }
    else return res;
    
}
