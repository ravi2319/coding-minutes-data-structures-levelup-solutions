#include<bits/stdc++.h>
using namespace std;



int cntSubarrays(vector<int> arr,int k)
{
    //complete this method
    int n = arr.size();
    if(n < 1)
        return 0;
    
    unordered_map<int,int> mp;
    int i = 0;
    int sum = 0;
    int ans = 0;
    
    while(i < n)
    {
        sum += arr[i];
        
        if(sum == k)
            ans += 1;
            
        if(mp.find(sum-k) != mp.end())
        {
            ans += mp[sum-k];
        }
        
        mp[sum]++;
        i++;
    }
    
    return ans;
}