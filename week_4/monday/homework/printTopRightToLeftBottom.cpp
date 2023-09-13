#include<iostream>
#include<vector>
using namespace std;

void printTopRightToLeftBottom(vector<vector<int>> mat){

    int n = mat.size();
    for(int i=0; i < n; i++){
        cout<<"Digonal["<< i << "]["<<n-i-1<<"]"<<mat[i][n-i-1]<<endl;
    }

}

int main(){
    vector<vector<int>> mat = {
        {1,2,3,4}, 
        {5,6,7,8}, 
        {9,10,11, 12}, 
        {13, 14, 15, 16}
    };
    printTopRightToLeftBottom(mat);
    return 0;
}