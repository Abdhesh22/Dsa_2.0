#include<iostream>
using namespace std;

void countOneToN(int n){
    for(int i=1; i <= n; i++){
        cout<<i<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    countOneToN(n);
    return 0;
}