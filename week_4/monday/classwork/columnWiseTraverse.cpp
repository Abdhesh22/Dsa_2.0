#include<iostream>
#include<vector>
using namespace std;

void columnWiseTraverse(vector<vector<int>> mat){
    int n = mat.size();

    for(int i=0; i < mat.size(); i++){
        for(int j=0; j < mat[i].size(); j++){
            cout<<mat[j][i]<<" ";
        }
        cout<<endl;
    }

}

int main(){
    vector<vector<int>> mat = {
        {1,2,3,4}, 
        {5,6,7,8}, 
        {9,10,11, 12}, 
        {13, 14, 15, 16}
        };
    columnWiseTraverse(mat);
    return 0;
}