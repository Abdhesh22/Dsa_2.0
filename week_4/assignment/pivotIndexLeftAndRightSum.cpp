#include <iostream>
#include <vector>
using namespace std;
int sumArray(vector<int> &nums, int start, int end)
{
    int sum = 0;
    for (int index = start; index < end; index++)
    {
        sum += nums[index];
    }
    return sum;
}

int bruteForce(vector<int> &nums)
{
    int ans = -1;
    for (int i = 0; i < nums.size(); i++)
    {

        int leftSum = sumArray(nums, 0, i);
        int rightSum = sumArray(nums, i + 1, nums.size());

        if (leftSum == rightSum)
        {
            return i;
        }
    }
    return ans;
}

int optimal(vector<int> &nums)
{
    int sum = sumArray(nums, 0, nums.size());

    int leftSumOfEachIndex[nums.size()];
    leftSumOfEachIndex[0] = 0;

    int rightSumOfEachIndex[nums.size()];
    rightSumOfEachIndex[nums.size() - 1] = 0;

    for (int i = 1; i < nums.size(); i++)
    {
        leftSumOfEachIndex[i] = leftSumOfEachIndex[i - 1] + nums[i - 1];
    }

    for (int i = nums.size() - 2; i >= 0; i--)
    {
        rightSumOfEachIndex[i] = rightSumOfEachIndex[i + 1] + nums[i + 1];
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (leftSumOfEachIndex[i] == rightSumOfEachIndex[i])
            return i;
    }

    return -1;
}

int pivotIndex(vector<int> &nums)
{
    // return bruteForce(nums);
    return optimal(nums);
}

int main()
{

    vector<int> v = {1, 7, 3, 6, 5, 6};
     cout << pivotIndex(v);

    return 0;
}