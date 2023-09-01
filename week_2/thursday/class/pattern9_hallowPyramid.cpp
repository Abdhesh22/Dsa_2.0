#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
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
}