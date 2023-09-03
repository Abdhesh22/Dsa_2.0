#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int row=0; row<=n; row++){
        //for printing spaces...
        for(int col=0; col<=n-row-1; col++){
            cout<<' ';
        }
        //printing number in increasing order...
        int number=0;
        for(int col=0; col<row; col++){
            if(col==0 || col==row-1 || row == n){
              cout<<" "<<col+1;
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}