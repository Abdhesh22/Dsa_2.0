#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int row=1; row<=n; row++){
        //printing number in increasing order...
        int number=0;
        for(int col=1; col<=row; col++){
            number = col;
            cout<<number;
        }
        for(int col=number-1; col>0; col--){
            cout<<col;
        }
        cout<<endl;
    }

    return 0;
}