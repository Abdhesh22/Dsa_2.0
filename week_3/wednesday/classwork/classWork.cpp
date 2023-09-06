#include<iostream>
#include<limits.h>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverseArray(int arr[], int start, int end){
    while (start < end){
        //you can use swap here
        int temp = arr[start]; 
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    } 
}

int maxElement(int arr[], int size){
    int max = INT_MIN;
    for(int i=0; i<size;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int minElement(int arr[], int size){
    int min = INT_MAX;
    for(int i=0; i<size;i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}


void countZeroAndOne(int arr[], int size){
    int zero = 0, one = 0; 
    for(int i=0; i<size;i++){
        if(arr[i]==0){
            zero++;
        }
        if(arr[i]==1){
            one++;
        }
    }

    cout<<"Zero: "<<zero << " One: "<<one<<endl;
}


void extremePrint(int arr[], int size){
    int left =0;
    int right = size-1;
    while(left<=right){
        if(left == right){
            cout<<arr[left]<<endl;
        }else{
            cout<<arr[left]<<endl;
            cout<<arr[right]<<endl;
        }
        left++;
        right--;
    }
}

int main(){
    int arr[] = {0,1,2,3,4,5,6};
    int size = 7;

    printArray(arr, size);
    reverseArray(arr, 0, size-1);
    printArray(arr, size);
    cout<<"Max: " <<maxElement(arr, size)<<endl;
    cout<<"Min: " <<minElement(arr, size)<<endl;
    countZeroAndOne(arr, size);
    extremePrint(arr, size);

    return 0;
}