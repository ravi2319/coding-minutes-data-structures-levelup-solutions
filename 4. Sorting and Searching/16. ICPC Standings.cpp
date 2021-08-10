#include<bits/stdc++.h>
using namespace std;

bool comp(pair<string,int> p1, pair<string,int> p2)
{
    return p1.second < p2.second;
}

int badness(vector<pair<string,int> > teams)
{
    //Complete this function to return the min badness
    sort(teams.begin(),teams.end(),comp);
    
    int ans = 0;
    int temp;
    for(int i=0; i<teams.size(); i++)
    {
        temp = teams[i].second - (i + 1);
        ans += abs(temp);
    }
       
    return ans;
}