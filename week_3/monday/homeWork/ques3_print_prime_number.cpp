#include<iostream>
using namespace std;


//logic for check if number is prime or not...
bool checkPrime(int number){
    for(int i=2; i < number/2; i++){
        if(number%i==0){
            return false;
        }
    }

    return true;
}


int main(){

    int number;
    cout<<"Enter the number: "<<endl;
    cin>>number;

    for(int i=2; i <= number; i++){
        //if number is prime then we print that number
        if(checkPrime(i)){
            cout<<i<<" ";
        }
    }

    //for optimisating you can search about Sieve of Eratosthenes

    return 0;
}