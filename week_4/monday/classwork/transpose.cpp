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

void traponse(vector<vector<int>> &mat){
    int n = mat.size();

    for(int i=0; i < mat.size(); i++){
        for(int j=i; j < mat[i].size(); j++){
            swap(mat[i][j], mat[j][i]);
        }
    }

}

int main(){
    vector<vector<int>> mat = {{1,2,3,4}, {5,6,7,8}, {9,10,11, 12}, {13, 14, 15, 16}};
    traponse(mat);
    rowWiseTraverse(mat);
    return 0;
}