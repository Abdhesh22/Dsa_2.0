#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int arr[] = {0,1,1,0,1,0,1,1,0};
    int low =0; 
    int high = 8;

    while(low < high){
        if(arr[low]==0 && low< high){
            low++;
        }
        if(arr[high]==1 && low< high){
            high--;
        }
        if(arr[high] < arr[low]){
            swap(arr[high], arr[low]);
            low++;
            high--;
        }
    }

    for(int i=0; i < 9; i++){
        cout<<arr[i] <<" ";
    }
    cout<<endl;
    return 0;
}