#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;

    for(int row = 1; row<=n; row++){
        int number = 1;
        for(int col = 1; col<=row; col++){
            cout << number << " ";
            number = number * (row-col) / col;
        }
        cout<<endl;
    }

    return 0;
}