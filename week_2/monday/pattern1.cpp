#include<iostream>
using namespace std;

int main(){
    for(int i=0; i < 5; i++){
        for(int j=0; j < 6; j++){
            if(j == 0 or j==5 or i==0 or i ==4){
                cout << "*";
            }else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}