#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    //for printing this 
    /**

*
**
***
****
*****
******   

    */

    for(int row=0; row<n; row++){
        for(int col=0; col<=row;col++){
            cout<<"*";
        }
        cout<<endl;
    }

//for priting

/**

*****
****
***
**
*

*/

    for(int row=0; row<=n; row++){
        for(int col=0; col<=n-row;col++){
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}