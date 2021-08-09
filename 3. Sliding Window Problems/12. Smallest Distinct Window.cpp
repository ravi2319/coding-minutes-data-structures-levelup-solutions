#include<string>
#include<bits/stdc++.h>
using namespace std;

string smallestWindow(string str)
{
    //Complete this method
    int n = str.length();
    if(n <= 1)
        return str;
    
    bool visited[256] = {false};
    int dist_ele = 0;
    for(int i=0; i<n; i++)
    {
        if(visited[str[i]]==false)
        {
            visited[str[i]] = true;
            dist_ele++;
        }
    }
    
    int start = 0; int start_idx = -1, min_length = INT_MAX;
    int count_chars[256] = {0};
    int count = 0;
    
    for(int j=0; j<n; j++)
    {
        count_chars[str[j]]++;
        
        if(count_chars[str[j]] == 1)
            count++;
            
        if(count == dist_ele)
        {
            while(count_chars[str[start]] > 1)
            {
                if(count_chars[str[start]] > 1)
                    count_chars[str[start]]--;
                start++;
            }
    
        
            int len_window = j - start + 1;
            if(min_length > len_window)
            {
                min_length = len_window;
                start_idx = start;
            }
        }
    }
    return str.substr(start_idx,min_length);
}