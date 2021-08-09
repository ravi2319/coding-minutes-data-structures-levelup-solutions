#include<vector>
#include<algorithm>
#include<climits>
#include<bits/stdc++.h>
using namespace std;


pair<int,int> minDifference(vector<int> a,vector<int> b)
{
    //Complete this method
    pair<int,int> ans;
    int temp = INT_MAX;
    int n = a.size();
    int m = b.size();
    
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    int i = 0;
    int j = 0;
    
    while(i < n and j < m)
    {
        if(abs(a[i] - b[j]) < temp)
        {
            temp = abs(a[i] - b[j]);
            ans.first = a[i];
            ans.second = b[j];
        }
        
        if(a[i] < b[j])
            i++;
        
        else
            j++;
    }
    
    return ans;
    
}