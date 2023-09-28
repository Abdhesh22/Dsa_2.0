#include<iostream>
using namespace std;

int getQuatient(int divisor,int dividend){
    int start = 0;
    int end = dividend;

    int ans = 0;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(mid * divisor == dividend){
            return mid;
        }else if(mid * divisor < dividend){
            ans = mid;
            start = mid + 1;
        }else {
            end = mid - 1;
        }
    }

    return ans;
}

//sqrt precision
//divided precision

int main(){

    int divisor = -3;
    int dividend = 28;

    int ans = getQuatient(abs(divisor), abs(dividend));

    if((divisor > 0 && dividend < 0) || (divisor < 0 && dividend > 0)){
       ans = 0 - ans;
    }

    cout<< "Ans: "<<ans<<endl;
    return 0;
}   