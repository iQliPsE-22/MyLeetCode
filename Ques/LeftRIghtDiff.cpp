#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> leftRightDifference(vector<int> &nums)
{
    int l = nums.size();
    vector<int> left{l};
    vector<int> right{l};
    vector<int> ans{l};
    left[0] = 0;
    right[3] = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        left[i] = left[i - 1] + nums[i - 1];
        right[l - i - 1] = right[l - i] + nums[l - i];
    }
    for (int i = 0; i < nums.size(); i++)
    {
        ans[i] = abs(left[i] - right[i]);
    }
    return ans;
}
int main()
{
    vector<int> nums;
    nums.push_back(10);
    nums.push_back(4);
    nums.push_back(8);
    nums.push_back(3);
    nums.push_back(3);
    nums.push_back(3);
    vector<int> ans = leftRightDifference(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << ans[i] << "\t";
    }
    return 0;
}