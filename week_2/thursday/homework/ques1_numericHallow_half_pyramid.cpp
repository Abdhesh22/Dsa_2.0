#include<iostream>
using namespace std;

/**
12345
2  5
3 5
45
5

*/

int main(){

    int n;
    cin>>n;

    for(int row=0; row<n; row++){
        for(int col =0; col < n-row; col++){
            //if we have first and last row then we need to print number...
            if(row==0 || row == n-1){ 
                /*12345
                  5
                */
                cout << row+col+1;
            }else if(col==0 || col==n-row-1){ //for pring the number if we have first /lastcolumn for that particular row
                cout << row+col+1;
                /**
                2  5
                3 5
                45
                */
            }else{//print space
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}