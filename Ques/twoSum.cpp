#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> ans;
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
        if (mp.find(complement) != mp.end())
        {
            ans.push_back(mp[complement]);
            ans.push_back(i);
            returan ans;
        }
        mp[nums[i]] = i;
    }
    return ans;
}

int main()
{
    vector<int> nums = {3, 3, 4};
    int target = 6;
    vector<int> ans = twoSum(nums, target);
    for (int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}