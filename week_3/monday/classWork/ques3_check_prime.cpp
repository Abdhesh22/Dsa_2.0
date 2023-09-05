#include<iostream>
using namespace std;

bool checkPrime(int number){
    for(int i=2; i < number/2; i++){
        if(number%i==0){
            return false;
        }
    }

    return true;
}

int main(){
    int n;
    cin>>n;
    if(checkPrime(n)){
        cout<<"Number is prime"<<endl;
    }else{
        cout<<"Number is not prime"<<endl;
    }
}