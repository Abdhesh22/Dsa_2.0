#include<iostream>
using namespace std;

int sumUptoN(int n){
    int sum =0;
    for(int i=1; i <= n; i++){
        sum += i;
    }

    return sum;
}

int sumUptoNOptimised(int n){
    return n*(n+1)/2;
}

int main(){

    int n;
    cout<<"Enter a +ve number"<<endl;
    cin>>n;

    int sum1 = sumUptoN(n);
    int sum2 = sumUptoNOptimised(n);

    cout<<"sum1: "<< sum1 <<endl;
    cout<<"sum2: "<< sum2 <<endl;

    return 0;
}