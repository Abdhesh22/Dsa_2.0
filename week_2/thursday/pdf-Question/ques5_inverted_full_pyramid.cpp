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

        //start
       for(int col=0; col<n-row; col++){
            cout<<"* ";
        }
        //to add ne line...
        cout<<endl;
    }
}