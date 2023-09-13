#include<iostream>
using namespace std;

int findMissing(int arr[], int n){
    int start =0;
    int end = n-1;
    int ans = -1;
    while(start <= end){
        int mid = start + (end-start)/2;
        int diff = arr[mid] - mid;
        //if diff is one then our missing is in right
        if(diff==1){
            start = mid+1;
        }else{
            ans = mid;
            end = mid -1;
        }
    }

    return ans+1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    cout<<findMissing(arr, 8)<<endl;
}