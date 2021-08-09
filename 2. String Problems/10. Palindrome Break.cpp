#include<bits/stdc++.h>
#include<string>
using namespace std;

string breakPalindrome(string s) 
{
    if(s.length() == 1)
        return "";
        
    //string s = palindrome.copy();
    
    for(int i=0; i<s.length()/2; i++)
    {
        if(s[i]!='a')
        {
            s[i] = 'a';
            return s;
        }
    }
    
    s[s.length()-1] = 'b';
    return s;
}