#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int target){
    int start =0;
    int end = n-1;

    //there is some flow in below line hw?

    while(start<=end){
        // int  mid = (start+end)/2;
        int mid = start + (end-start)/2;
        if(arr[mid]==target){
            return mid;
        }else if(target > arr[mid]){
            start = mid + 1;
        }else if(target < arr[mid]){
            end = mid - 1;
        }
    }

    return -1;
}


int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    cout<<binarySearch(arr, 9, 9)<<endl;
    cout<<binarySearch(arr, 9 , 11)<<endl;

}