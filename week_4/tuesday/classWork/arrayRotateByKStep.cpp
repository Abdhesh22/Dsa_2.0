#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n);

        for(int index=0; index<n; index++){
            int newIndex = (index+k) % n;
            ans[newIndex] = nums[index];
        }
        nums = ans;
}

int main(){

    vector<int> v;
    
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    rotate(v, 2);

    for(int index=0; index<v.size(); index++){
        cout<<v[index]<<" ";
    }

    cout<<endl;

}