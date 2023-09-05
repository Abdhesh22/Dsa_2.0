#include<iostream>
using namespace std;

bool checkEvenOdd(int n){
    return n%2==0;
}


int main(){

    int n;
    cin>>n;
    
    if(checkEvenOdd(n)){
        cout<<"your number is even"<<endl;
    }else{
        cout<<"your number is odd"<<endl;
    }

    return 0;
}