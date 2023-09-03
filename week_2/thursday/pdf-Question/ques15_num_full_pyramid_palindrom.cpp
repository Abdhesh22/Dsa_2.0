#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int row=1; row<=n; row++){
        //for printing spaces...
        for(int col=0; col<=n-row-1; col++){
            cout<<' ';
        }

        //printing number in increasing order...
        int number=0;
        for(int col=0; col<row; col++){
            number = col+1;
            cout<<number;
        }


        for(int col=number-1; col>0; col--){
            cout<<col;
        }
        cout<<endl;
    }

    return 0;
}