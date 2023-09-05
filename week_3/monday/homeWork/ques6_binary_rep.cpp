#include<iostream>
using namespace std;

int convertDecimalToBinary(int decimal){
    
    int position = 1;
    int binary = 0;

    while(decimal){
        int remainder = decimal % 2;
        binary += remainder * position;
        position *= 10;
        decimal/=2;
    }

    return binary;
}

int main(){
    int number; 
    cout<<"Enter you Decimal Number"<<endl;
    cin>>number;

    int binaryNumber = convertDecimalToBinary(number);
    cout<<"binaryNumber: "<<binaryNumber<<endl;

    return 0;
}