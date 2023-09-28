#include<iostream>
#include<vector>
using namespace std;


int bs(vector<int> &arr, int target){
    int start = 0;
    int end = arr.size() -1;

    while(start <= end){
        int mid = start + (end - start)/2;

        if(arr[mid] == target){
            return mid;
        }else if(arr[mid - 1] == target){
            return mid - 1;
        }else if(arr[mid + 1] == target){
            return mid + 1;
        }else if(arr[mid] < target){
            start = mid + 1;
        }else {
            end = mid - 1;
        }

    }

    return -1;
}


int main(){

    vector<int> ns = {20, 10, 30, 50, 40, 70, 60};
    //in sorted i in nearly sorted i, i+1, i-1;
    for(int i=0; i < ns.size(); i++){
        cout<<bs(ns, ns[i])<<endl;
    }
    return 0;
}