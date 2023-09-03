#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int num = n;

    for(int row=0; row<n; row++){
        for(int col=0; col<=row;col++){
            cout<<num;
        }
        num++;
        cout<<endl;
    }

    for(int row=0; row<=n; row++){
        for(int col=0; col<=n-row;col++){
            cout<<num;
        }
        num--;
        cout<<endl;
    }


    return 0;
}