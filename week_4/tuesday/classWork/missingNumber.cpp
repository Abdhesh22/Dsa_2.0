#include<iostream>
using namespace std;

 int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum =0;

        for(int index =0; index<nums.size(); index++){
            sum += nums[index];
        }

        int totalSum = ((n) * (n+1))/2;
        int ans = totalSum - sum;

        return ans;
}

int main(){
    vector<int> v;
    
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    cout<<missingNumber(v);

}