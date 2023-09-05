#include<iostream>
using namespace std;

void printDigit(int number){
    while(number){
        int digit = number % 10;
        cout<<"Digit: "<<digit<<endl;
        number /= 10;
    } 
}

void printDigitForwardOrder(int number){
    if(!number) return;
    int digit = number % 10;
    printDigitForwardOrder(number/10);
    cout<< "Digit: "<<digit<<endl;
}

int main(){

    int number;
    cout<<"Please Enter the number: "<<endl;
    cin>>number;

    printDigit(number);
    //we can print the in forwarding order using recursion/backtracking..
    printDigitForwardOrder(number); 

    return 0;
}