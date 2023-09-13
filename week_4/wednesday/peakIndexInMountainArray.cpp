class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int start = 0;
        int end = arr.size() - 1;
        int ans = -1;

        while(start < end){
            int mid = start + (end-start)/2;
            if(arr[mid] < arr[mid+1]){
                //A wali line main hoon
                //peak right main exist krti
                start = mid+1;
            }else {
                //B line pe hoon yaa phir main khud peak hoon.
                end = mid;
            }
        }

        return start;
    }
};



class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int start = 0;
        int end = arr.size() - 1;
        int ans = -1;

        while(start<end){

            int mid = start + (end-start)/2;
            int leftIndex = mid - 1;
            int rightIndex = mid + 1;

            if(arr[mid] > arr[rightIndex] && arr[mid]> arr[leftIndex]){
                return mid;
            }else if(arr[mid] < arr[rightIndex]){
                start = mid;
            }else{
                end = mid;
            }

        }

        return ans;
    }
};