#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int row=1; row<=n; row++){
        //printing number in increasing order...
        char number=0;
        for(int col=0; col<row; col++){
            number = col;
            char ch = col + 'A';
            cout<<ch;
        }
        for(int col=number-1; col>=0; col--){
            char ch = col + 'A';
            cout<<ch;
        }
        cout<<endl;
    }

    return 0;
}