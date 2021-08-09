#include<vector>
using namespace std;

//Expected Complexity O(N)
vector<int> productArray(vector<int> arr){
    
    //Create an output Array
    int n = arr.size();
    vector<int> output;
    
    //update the output array and return
    //complete the code
    int product = 1;
    for(int i=0; i<n; i++)
    {
        product *= arr[i];
        output.push_back(product);
    }
    
    product = 1;
    for(int i = n-1; i > 0; i--)
    {
        output[i] = output[i-1]*product;
        product *= arr[i];
    }
    output[0] = product;
    
    return output;
}