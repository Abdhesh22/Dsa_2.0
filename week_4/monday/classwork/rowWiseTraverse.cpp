#include<iostream>
#include<vector>
using namespace std;

void rowWiseTraverse(vector<vector<int>> mat){
    int n = mat.size();

    for(int i=0; i < mat.size(); i++){
        for(int j=0; j < mat[i].size(); j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main(){
    vector<vector<int>> mat = {{1,2,3,4}, {5,6,7,8}, {9,10,11, 12}, {13, 14, 15, 16}};
    rowWiseTraverse(mat);
    return 0;
}