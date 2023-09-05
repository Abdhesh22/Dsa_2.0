#include<iostream>
#include<algorithm>
using namespace std;

int maximum(int num1, int num2, int num3){
    int maxi = max(num1, num2);
    maxi = max(num3, maxi);

    return maxi;
}

int main(){
    int num1, num2,  num3;
    cout<<"Enter your numbers "<<endl;
    cin>>num1;
    cin>>num2;
    cin>>num3;

    int maxi = maximum(num1, num2, num3);

    cout<<"Maximum is: "<<maxi<<endl;
    return 0;
}