#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int,int> p1, pair<int,int> p2)
{
    return p1.second < p2.second;
}
int countActivites(vector<pair<int,int> > activities)
{
    //Complete this method
    int n = activities.size();
    sort(activities.begin(),activities.end(),compare);
    
    int prev = activities[0].second;
    int ans = 1;
    
    for(int i = 1; i < n;i++)
    {
        if(activities[i].first >= prev)
        {
            ans++;
            prev = activities[i].second;
        }
    }
    
    return ans;
}