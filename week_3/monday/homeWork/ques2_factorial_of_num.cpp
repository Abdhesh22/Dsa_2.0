#include<iostream>
using namespace std;

int computeFactorial(int number){
    int ans = 1;
    for(int i=2; i <=number; i++){
        ans *= i;
    }

    return ans;
}


int main(){
    int number;
    cout<<"Enter the number: "<<endl;
    cin>>number;

    int factorial = computeFactorial(number);

    cout<<"factorial is: "<<factorial<<endl;

    return 0;
}