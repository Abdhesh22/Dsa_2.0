#include<iostream>
using namespace std;


int countSetBits(int number){
    int count = 0;
    while(number){
        //we can also do this...
        // if(number&1==1){
        //     count++;
        // }

        count += number&1;
        number>>=1;
    }

    return count;
}

int main(){
    int number;
    cout<<"Enter number"<<endl;

    cin>>number;

    int noOfSetBits = countSetBits(number);

    cout<<"Number Of set bits "<<noOfSetBits<<endl;
    return 0;
}