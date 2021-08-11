#include<bits/stdc++.h>
using namespace std;

bool util(vector<int> arr, int k, int limit)
{
    int friends = 0;
    int sum = 0;
    
    for(int i=0; i<arr.size(); i++)
    {
        if(sum + arr[i] >= limit)
        {
            friends += 1;
            sum = 0;
        }
        else
        {
            sum += arr[i];
        }
    }
    
    return friends>=k;
}

int getCoins(vector<int> arr, int k)
{
    //return the max coins that you can win!
    if(k > arr.size())
        return -1;
    int s = 0;
    int e = 0;
    for(int i=0; i<arr.size(); i++)
    {
        e += arr[i];
    }
    int res = -1;
    while(s<=e)
    {
        int mid = (s+e)/2;
        
        bool isValid = util(arr,k,mid);
        
        if(isValid)
        {
            s = mid + 1;
            res = mid;
        }
        
        else
        {
            e = mid - 1;
        }
    }
    
    return res;
}