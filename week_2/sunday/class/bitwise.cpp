#include<iostream>

using namespace std;


int main(){
    int  a = 10;

    cout<< (a++) * (++a) <<endl;
    a = 10;
    cout<< (++a) * (a++) <<endl;

    // cout<<(++a) * 10<<endl;
    // cout<<(a++) * 10<<endl;
    return 0;
}