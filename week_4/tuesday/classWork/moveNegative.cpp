#include<iostream>
using namespace std;

void moveNeg(int arr[], int size){
    int negIndex = 0;
    for(int index=0;index < size; index++){
        if(arr[index] < 0){
            swap(arr[index], arr[negIndex]);
            negIndex++;
        }
    }
}

int main(){
    int arr[] = {-1,2,323,-1930,-10,20,0};
    moveNeg(arr,7);
    for(int i=0; i < 7; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}