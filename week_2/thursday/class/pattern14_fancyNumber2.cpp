#include<iostream>
using namespace std;


int main(){
    int n; 
    cin>>n;

    for(int row = 0; row < n; row++){
        int totalNum = row+1;
        for(int col=0; col<totalNum;col++){
            if(col == totalNum - 1){
                cout<<row+1;
            }else{
                cout << row +1 <<'*';
            }
        }
        cout<<endl;
    }


    for(int row = n-1; row >=0; row--){
        int totalNum = row;
        for(int col=0; col<totalNum;col++){
            if(col == totalNum - 1){
                cout<<row;
            }else{
                cout << row <<'*';
            }
        }
        cout<<endl;
    }


    return 0;
}