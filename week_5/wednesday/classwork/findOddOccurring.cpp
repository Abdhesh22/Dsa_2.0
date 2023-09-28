#include<iostream>
#include<vector>
using namespace std;

int binary(vector<int> arr){

    int n = arr.size();
    int start = 0;
    int end = n-1;

    while(start <= end){
        int mid = start + (end - start)/2;
        if(start == end){
            return arr[start];
        }else if(mid & 1){
            if(0 <= mid-1 && arr[mid] == arr[mid - 1]){
                start = mid + 1;
            }else{
                end = mid -1;
            }
        }else{
            if((mid + 1 < n) && arr[mid] == arr[mid + 1]){
                start = mid + 2;
            }else{
                end = mid;
            }
        }
    }

    return -1;
}

//classic, search space, index based, predicate function

int main(){

    vector<int> v = {1, 1, 5, 5, 2, 2, 3, 3, 2, 4, 4};
    //even first
    //odd second
    cout<<binary(v);

    return 0;
}