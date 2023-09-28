#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> spiral;
        int endRow = n-1;
        int endCol = n-1;
        int total = n * n;
        int startRow=0;
        int startCol=0;
        int ct = 1;
        while(ct<=total){
            //we always update row col after using that...
            vector<int> row;
            //left to right print...
            for(int j=startCol; j < endCol && ct<=total; j++){
                cout<<"1"<<ct<<endl;
                row.push_back(ct);
                ct++;
            }
            spiral.push_back(row);
            startRow++;
            row = {};
            //up to down print...
            for(int i=startRow; i < endRow && ct<=total ; i++){
                cout<<"2"<<ct<<endl;
                row.push_back(ct);
                ct++;
            }
            //we used endCol so need to  update that..
            spiral.push_back(row);
            endCol--;
            row = {};
            //down to up...
            for(int j=endCol-1; j >= startCol && ct<=total; j--){
               cout<<"3"<<ct<<endl;
                row.push_back(ct);
                ct++;
            }
            //we used endRow so need to update that
            spiral.push_back(row);
            endRow--;
            row = {};
            
            for(int i=endRow-1; i>= startRow && ct<=total; i--){
                row.push_back(ct);
                 cout<<"4"<<ct<<endl;
                ct++;
            }
            spiral.push_back(row);
            startCol++;
            row = {};
        }

        return spiral;
    }


int main(){
    int n = 3;
    vector<vector<int>> ans = generateMatrix(n);
    for(int i=0; i < n; i++){
        for(int j=0; j <n; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}