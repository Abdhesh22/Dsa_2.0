#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;
    // n = n/2;
    for(int row=0; row < n; row++){
        int number = 1;
        int noOfColumn = row * 2 + 1;
        for(int col=0; col < noOfColumn; col++){
            if(col == 0 || col == noOfColumn-1){
                cout << "*";
            }else{
                col < (noOfColumn)/2 ? cout<< number++ : cout<< number--;
            }
        }
        cout<<endl;
    }


    for(int row=0; row < n; row++){
        int number = 1; 
        int noOfColumn = (n - row*2) + 1;
        for(int col=0; col < noOfColumn; col++){
             if(col == 0 || col == noOfColumn-1){
                cout << "*";
            }else{
                col < (noOfColumn)/2 ? cout<< number++ : cout<< number--;
            }
        }
        cout<<endl;
    }


    return 0;
}