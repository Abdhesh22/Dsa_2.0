#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
 
vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int rowNumber = -1;
        int maximumOne = INT_MIN;

        for(int row=0; row < mat.size(); row++){
            int oneCount = 0;
           for(int col=0; col < mat[row].size(); col++){
                if(mat[row][col]==1){
                    oneCount++;
                }   
            }

            if(oneCount > maximumOne){
                maximumOne = oneCount;
                rowNumber = row;
            }

        }

        return {rowNumber, maximumOne};
}

int main(){
    vector<vector<int>> mat = {{0,1,0,1}, {0,0,1,0}, {0,0,0,0}, {1,1,1,1}};

    vector<int> ans = rowAndMaximumOnes(mat);
    for(int i=0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}