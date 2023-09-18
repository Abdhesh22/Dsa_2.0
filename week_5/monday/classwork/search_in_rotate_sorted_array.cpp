  int findPivot(vector<int> arr){
        int start =0;
        int end = arr.size()-1;

        while(start <= end){
            int mid = start + (end-start)/2;
            if(start == end) return end;
            else if(mid+1 < arr.size()  && arr[mid] > arr[mid+1]) return mid;
            else if( mid -1 >= 0 && arr[mid] < arr[mid-1]) return mid-1;
            else if(arr[start] >  arr[mid]) end = mid-1;
            else start = mid+1;
        }

        return -1;
    }

    int binary(vector<int> arr, int start, int end, int target){

        while(start<=end){
            int mid = start + (end-start)/2;
            if(arr[mid]==target){
                return mid;
            }else if(target > arr[mid]){
                start = mid+1;
            }else {
                end = mid-1;
            }
        }

        return -1;
    }

    int search(vector<int>& arr, int target) {
        int pivot = findPivot(arr);
        // cout<<pivot<<endl;
        if(target >= arr[0] && target <= arr[pivot] ){
            return binary(arr, 0, pivot, target);
        }else{
            return binary(arr, pivot+1, arr.size()-1, target);
        }
    }


    int main(){

        

        return 0;
    }