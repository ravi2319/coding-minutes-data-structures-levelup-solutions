#include<bits/stdc++.h>
using namespace std;

//str is the input the string
string compressString(const string &str)
{   
    //complete the function to return output string
    string ans = "";
    
    int i = 0;
    char ch = str[0];
    int count = 0;
    int n = str.length();
    
    while(i < n)
    {
        if(str[i] == ch)
        {
            count += 1;
            i++;
        }
        
        else
        {
            ans += ch + to_string(count);
            ch = str[i];
            count = 1;
            i++;
        }
    }
    
    ans += ch + to_string(count);
    
    if(str.length() < ans.length())
        return str;
    return ans;
}