#include<vector>
using namespace std;

int maxSubarraySum(vector<int> arr){
    //Complete this function, your function should return the maximum subarray sum
    int n = arr.size();
    int max_so_far = 0;
    int max_til_now = 0;
    
    for(int i = 0; i < n; i++)
    {
        max_til_now += arr[i];
        
        if(max_so_far < max_til_now)
            max_so_far = max_til_now;
            
        if(max_til_now < 0)
            max_til_now = 0;
            
    }
    
    
    return max_so_far;
}