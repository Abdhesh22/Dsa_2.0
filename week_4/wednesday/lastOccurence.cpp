#include<iostream>
using namespace std;

int findLastOccurence(int arr[], int n, int target){
    int start =0;
    int end = n-1;
    int ans = -1;

    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]==target){
            ans = mid;
            start = mid + 1;
        }else if(arr[mid]  < target){
            start = mid + 1;
        }else{
            end = mid-1;
        }
    }

    return ans;
}

int main(){
    int arr[] = {1,2,4,4,5,6,7,8,9};
    cout<<findLastOccurence(arr, 9, 4)<<endl;
    return 0;
}