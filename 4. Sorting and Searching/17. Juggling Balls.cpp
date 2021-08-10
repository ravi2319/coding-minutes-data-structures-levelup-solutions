#include<vector>
using namespace std;


vector<int> sortBalls(vector<int> balls)
{
    //sort the balls in place in a single pass (O(N) time, O(1) space)
    int lo = 0;
    int mid = 0;
    int hi = balls.size()-1;
    
    while(mid <= hi)
    {
        switch(balls[mid])
        {    
            case 0:
                swap(balls[lo++],balls[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(balls[mid],balls[hi--]);
                break;
        }
    }
        
    
    return balls;
}