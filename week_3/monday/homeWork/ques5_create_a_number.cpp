#include<iostream>
using namespace std;

int powOf10(int power){
    int ans = 1;
    while(power){
        ans *= 10;
        power--;
    }
    return ans;
}

int createNumberUsingDigit(int numberOfDigit){
    int digitPositon = powOf10(numberOfDigit-1);
    //the first digit we put is 10 ^ numberOfDigit...
    int number = 0;
    for(int i=1;i<=numberOfDigit; i++){
        cout<<"Enter the Digit no. "<<i<<" Of your number"<<endl;
        int digit;
        cin>>digit;
        digit *= digitPositon;
        digitPositon/=10;
        number += digit; 
    }

    return number;
}

int main(){
    int numberOfDigit, number;
    cout<<"Enter the number of Digit: "<<endl;
    cin >> numberOfDigit;
    number = createNumberUsingDigit(numberOfDigit);
    cout<<"your number is: "<<number<<endl;
    return 0;
}