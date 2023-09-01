#include<iostream>
using namespace std;

/***

********1********
*******2*2*******
******3*3*3******
*****4*4*4*4*****
****5*5*5*5*5****

*/

int main(){
    int n;
    cin>>n;

    for(int row=0; row<n;row++){
        //printing before stars
        for(int col=0; col<2*n-row-2; col++){
            cout<<"*";
        }


        for(int col=0; col< 2*(row+1)-1; col++){
            if(col%2){
                cout<<"*";
            }else{
                cout<<row+1;
            }
        }

        //printing after stars
        for(int col=0; col<2*n-row-2; col++){
            cout<<"*";
        }

        cout<<endl;
    }

}