#include<iostream>
using namespace std;

//function will return true if number is odd
bool checkOddEven(int number){
    return number&1==1;
}

int main(){
    int number;
    cout<<"Enter your number is: ";
    cin>>number;

    if(checkOddEven(number)){
        cout<<"Number is odd"<<endl;
    }else{
        cout<<"Number is even"<<endl;
    }

    return 0;
}