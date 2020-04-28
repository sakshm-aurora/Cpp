#Given a string s representing a password, you need to check if the string is valid or not. A valid string has the following properties:
#String must have the length greater than or equal to 10.
#String must contain at least 1 numeric character.
#String must contain at least 1 uppercase character.
#String must contain at least 1 lowercase character.
#String must contain at least 1 special character from @#$-*.



#include<iostream>
#include<cstring>
#include <bits/stdc++.h>

using namespace std;

string verify(string a)
{
bool digit =false;
bool upper = false;
bool lower = false;
bool special = false;
int i,j , len;
len = a.length();
  if(len >= 10)
  	{
  		for(i=0;i<len;i++)
  		{
  		if(isdigit(a[i]))
  		{
  		    digit= true;
  		}
  		if(isupper(a[i]))
  		{
  			upper = true;
  		}
  		if(islower(a[i]))
  		{
  			lower = true;
  		}
  		if(a[i] == '$' || a[i]=='-' || a[i]== '@' || a[i]=='#')
  		{
  			special = true;
  		}
  	}
  	if(digit == true && upper == true && lower == true && special  == true)
  		return "valid";
    else
  	    return "invalid";
  	}
  	else
  	return "invalid";
}

int main() {
	string a,b;
	cin>>a;
	b=verify(a);
	if(b == "valid")
	{
	    cout<<"valid";
	}
	else
	{
	    cout<<"not valid";
	}
	return 0;
}
