#include<string>
using namespace std;

string convert_to_digital_time(int minutes){
    //complete this function
    int q;
    int rem;
    string ans;
    
    q = minutes/60;
    rem = minutes%60;
    
    ans += to_string(q) + ":";
    
    if(rem < 10)
        ans += '0' + to_string(rem);
    else
        ans += to_string(rem);
    
    return ans;
}