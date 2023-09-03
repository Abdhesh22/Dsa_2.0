#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    n = n/2;

    for(int row =0; row<n; row++){
        //for priting the spaces
        for(int col=0;col<n-row-1; col++){
            cout<<" ";
        }
        //for printing the stars
        for(int col=0; col<2*row+1;col++){
            if(col == 0 || col == 2*row) {
                cout<<"*";
            }else{
                cout <<" ";
            }
        }
        cout<<endl;
    }

   for(int row=0; row<n;row++){
        // console.log("🚀 ~ file: pattern11_invertedDiamond.cpp:25 ~ intmain ~ row:", row)
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
        //to add new line...
        cout<<endl;
    }
    return 0;
}