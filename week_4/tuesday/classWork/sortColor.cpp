#include<iostream>
#include<vector>
using namespace std;


void sortColors(vector<int>& nums) {
        int n = nums.size();
        int index = 0;
        int left =0;
        int right = n-1;

        while(index <= right){
            if(nums[index] == 0){
                swap(nums[index], nums[left]);
                left++;
                index++;
            }else if(nums[index]==2){
                swap(nums[index], nums[right]);
                //yaha index++ nahi kyunki humko iska dusra element nahi pta hai
                right--;
            }else{
                index++;
            }
        }

    }

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);

    sortColors(v);
    for(int i=0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
}