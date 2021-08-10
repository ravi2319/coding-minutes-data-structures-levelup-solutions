#include<bits/stdc++.h>
using namespace std;


pair<int,int> search(int m, int n, vector<vector<int>> v, int k)
{
    //write your code here.
    int i=0;
    int j=n-1;
    
    while(i<m and j >=0)
    {
        if(v[i][j] == k)
        {
            return {i,j};
        }
        
        else if(v[i][j] < k)
        {
            i++;
        }
        
        else if(v[i][j] > k)
        {
            j--;
        }
    }
    
    return {-1,-1};
}