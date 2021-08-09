#include<bits/stdc++.h>
using namespace std;

bool compare(string x, string y)
{
    return x+y > y+x;
}

string concatenate(vector<int> numbers)
{
    //complete this method and return the largest number you can form as a string
    vector<string> temp;
    for(int i=0; i<numbers.size(); i++)
    {
        string var = to_string(numbers[i]);
        temp.push_back(var);
    }
    
    sort(temp.begin(),temp.end(),compare);
    
    string ans = "";
    for(auto x : temp)
    {
        ans += x;
    }
    
    return ans;
}