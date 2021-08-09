#include<vector>
#include<bits/stdc++.h>
using namespace std;


vector<int> maxInWindow(vector<int> input,int k)
{
    priority_queue<pair<int,int>> pq;
    int i=0;
    int j=0;
    vector<int> ans;
    int n = input.size();
    
    while(j<n)
    {
        pq.push({input[j],j});
        
        if(j-i+1 < k)   j++;
        
        else if(j-i+1 == k)
        {
            while(pq.top().second < i)
                pq.pop();
                
            ans.push_back(pq.top().first);
            i++;
            j++;
        }    
    }
    
    return ans;
}