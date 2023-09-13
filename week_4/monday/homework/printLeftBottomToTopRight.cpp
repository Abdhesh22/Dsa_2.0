#include<iostream>
#include<vector>
using namespace std;

void printLeftBottomToTopRight(vector<vector<int>> mat){

    int n = mat.size();
    for(int i=0; i < n; i++){
        cout<<"Digonal["<< n-i-1 << "]["<<i<<"]"<<mat[n-i-1][i]<<endl;
    }

}

int main(){
    vector<vector<int>> mat = {
        {1,2,3,4}, 
        {5,6,7,8}, 
        {9,10,11, 12}, 
        {13, 14, 15, 16}
    };
    printLeftBottomToTopRight(mat);
    return 0;
}