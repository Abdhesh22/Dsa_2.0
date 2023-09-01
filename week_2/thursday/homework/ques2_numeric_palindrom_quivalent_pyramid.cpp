#include<iostream>
using namespace std;

/***
    1
   121
  12321
 1234321
123454321
*/

int main(){
    int n;
    cin >> n;


    for(int row=0; row<n;row++){
        //printing for spaces....
        for(int col=0; col<n-row-1; col++){
            cout<<" ";
        }
        //printing numbers...
        int count = 0;
        for(int col=0; col <= row; col++){
            count = col;
            cout<<count+1;
        }
        /**
        first two prints this
         1
        12
       123
      1234
     12345*/

        // // // //for printing decreasing number...
        //you can any one of them priting in descreasing...
        // for(int decreasing=count; decreasing>=1; decreasing--){
        //     cout<<decreasing;
        // }

        for(int col=row; col>=1;col--){
            cout<<col;
        }

        /**
            1
           121
          12321
         1234321
        123454321*/
        cout<<endl;
    }

    return 0;
}