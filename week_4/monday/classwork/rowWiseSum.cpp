#include<iostream>
#include<vector>
using namespace std;

void printRowWiseSum(vector<vector<int>> mat){

    for(int i=0; i < mat.size(); i++){
        int sum = 0;
        for(int j=0; j < mat[i].size(); j++){
            sum += mat[i][j];
        }
        cout<<"Sum of Row: "<<i+1 <<" is: " << sum<<endl;
    }

}

int main(){
    vector<vector<int>> mat = {{1,2,3,4}, {5,6,7,8}, {9,10,11, 12}, {13, 14, 15, 16}};
    printRowWiseSum(mat);
    return 0;
}