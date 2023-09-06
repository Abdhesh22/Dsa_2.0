#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int count = 1;

    for(int row=0; row<n; row++){
        for(int col=0; col<=row;col++){
            cout<<count++;
            if(col<row){
                cout<<"*";
            }
        }
        cout<<endl;
    }

    count -= n;
    for(int row=0; row<n; row++){
        int start = count;
        int noOfColumn = n-row-1;
        for(int col=0; col<=noOfColumn;col++){
            cout<<start;
            start++;
            if(col<noOfColumn){
                cout<<"*";
            }
        }
        count -= noOfColumn;
        cout<<endl;
    }

    return 0;
}