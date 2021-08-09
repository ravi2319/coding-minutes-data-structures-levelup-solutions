#include<bits/stdc++.h>
using namespace std;

int skip_blank(string &str, int idx)
{
    while(idx < str.length() and str[idx]==' ')
    {
        idx += 1;
    }
    
    return idx;
}

int normalize_util(string &str, int idx)
{
    if(idx < str.length() and str[idx] != ' ')
    {
        str[idx] = toupper(str[idx]);
        idx += 1;
    }
    
    while(idx < str.length() and str[idx] != ' ')
    {
        str[idx] = tolower(str[idx]);
        idx += 1;
    }
    
    return idx;
}

string normalize(const string &sentence) {
    string copy = sentence;
    //Make the changes in copy, and return it
    int idx = 0;
    
    while(idx < copy.length())
    {
        idx = skip_blank(copy, idx);
        idx = normalize_util(copy,idx);
    }
    
    return copy;
}