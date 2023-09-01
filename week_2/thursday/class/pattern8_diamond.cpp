#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;

    n/=2;

    for(int row =0; row<n; row++){

        //for priting the spaces
        for(int col=0;col<n-row-1; col++){
            cout<<" ";
        }

        //for printing the stars
        for(int col=0; col<row+1;col++){
            cout<<"* ";
        }

        cout<<endl;
    }


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