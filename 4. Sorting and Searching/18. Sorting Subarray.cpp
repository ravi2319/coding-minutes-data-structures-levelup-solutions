#include<vector>
#include<climits>
#include<bits/stdc++.h>
using namespace std;


pair<int,int> subarraySorting(vector<int> a){
    //Expected Optimal Complexity O(n) Time, O(1) Space
    //may be start with O(NLogN) and try to improve
    //complete this function
    int n = a.size();
    int s=0,e=n-1,i,maxv,minv;
    
    for(s=0; s <n-1; s++)
    {
        if(a[s] > a[s+1])
            break;
    }
    
    if(s == n-1)
        return {-1,-1};
    
    for(e=n-1; e>0; e--)
    {
        if(a[e] < a[e-1])
            break;
    }
    
    maxv = a[s];
    minv = a[s];
    
    for(i=s+1; i<=e; i++)
    {
        maxv = max(maxv,a[i]);
        minv = min(minv,a[i]);
    }
    
    for(i=0; i<s; i++)
    {
        if(a[i]>minv){
            s=i;
            break;
        }
    }
    
    for(i=n-1; i>e; i--)
    {
        if(a[i]<maxv){
            e=i;
            break;
        }
    }
    

    return {s,e};
}