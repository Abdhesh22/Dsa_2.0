#include<iostream>
using namespace std;

int sumUptoN(int n){
    int sum =0;
    for(int i=2; i <= n; i = i+2){
        sum += i;
    }

    return sum;
}


int main(){
    
    int n;
    cout<<"Enter a +ve number"<<endl;
    cin>>n;

    int sum1 = sumUptoN(n);

    cout<<"sum1: "<< sum1 <<endl;

    return 0;
}