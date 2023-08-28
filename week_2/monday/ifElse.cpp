#include<iostream>
using namespace std;


void evenOdd(int n){
    n%2==0 ? cout<<"Even"<<endl : cout<<"Odd"<<endl;
}


int main(){

    int num = 10;
    if(num>0){
        cout<<"Positive"<<endl;
    }else if(num<0){
        cout << "Negative"<<endl;
    }else {
        cout<<"Zero"<<endl;
    }
    evenOdd(num);

    return 0;

}