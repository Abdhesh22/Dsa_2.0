#include<iostream>
using namespace std;

int main(){
    int n=0;
    cin>>n;

    for(int row=0; row<n;row++){
        //spaces...
        for(int col=0; col<row;col++){
            cout << " ";
        }

        //star
       for(int col=0; col<(2*(n-row) - 1); col++){
            if(col==0 || col==(2*(n-row) - 1)-1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        //to add ne line...
        cout<<endl;
    }
}