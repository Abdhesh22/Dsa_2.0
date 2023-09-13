#include<iostream>
#include<vector>
using namespace std;

void printDiagonal(vector<vector<int>> mat){

    for(int i=0; i < mat.size(); i++){
        cout<<"Digonal["<< i << "]["<<i<<"]"<<mat[i][i]<<endl;
    }

}

int main(){
    vector<vector<int>> mat = {
        {1,2,3,4}, 
        {5,6,7,8}, 
        {9,10,11, 12}, 
        {13, 14, 15, 16}
    };
    printDiagonal(mat);
    return 0;
}