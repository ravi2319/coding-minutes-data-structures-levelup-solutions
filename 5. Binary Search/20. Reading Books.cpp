#include<bits/stdc++.h>
using namespace std;

bool util(vector<int> books, int m, int mid)
{
    int students = 1;
    int sum = 0;
    
    for(int i=0; i<books.size(); i++)
    {
        if(books[i]>mid)    return false;
        if(sum + books[i] > mid)
        {
            students++;
            sum = books[i];
            
            if(students > m)
                return false;
        }
        
        else
            sum += books[i];
    }
    
    return true;
}


int minPages(vector<int> books, int m)
{
    if(m > books.size())
        return -1;
        
    int sum = 0;
    for(int i=0; i<books.size(); i++)
    {
        sum += books[i];
    }
    
    int s = 0;
    int e = sum;
    int res = -1;
    
    while(s <= e)
    {
        int mid = (s+e)/2;
        
        bool isValid = util(books,m,mid);
        
        if(isValid)
        {
            res = mid;
            e = mid - 1;
        }
        else
        {
            s = mid+1;
        }
    }
    
    return res;
}