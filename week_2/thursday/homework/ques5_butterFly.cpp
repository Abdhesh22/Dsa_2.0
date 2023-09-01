#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int row=0; row < n; row++){
        //printing before star
        for(int col=0; col<=row; col++){
            cout<<"*";
        }

        //for priting spaces....
        for(int col=0; col<2*(n-row)-2; col++){
            cout<<" ";
        }

        //now for priting the other spaces...
        for(int col=0; col<=row; col++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int row=0; row < n; row++){
        //printing before star
        for(int col=0; col<n-row; col++){
            cout<<"*";
        }

        //for priting spaces....
        for(int col=0; col<2*row; col++){
            cout<<" ";
        }

        //now for priting the other spaces...
        for(int col=0; col<n-row; col++){
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}