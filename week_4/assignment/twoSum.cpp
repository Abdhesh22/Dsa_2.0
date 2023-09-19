#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target){
    int low = 0;
    int high = nums.size()-1;

    while (low <= high){  
        int sum = nums[low] + nums[high];
        if(sum == target) {
            return {low, high};
        }else if(sum < target) {
            low++;
        }else {
            high--;
        }
    }
    
    return {-1};
}

int main(){
    vector<int> v = {1,2,3,4,5};
    vector<int> ans = twoSum(v,9);
    for(int i=0;  i < ans.size(); i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}