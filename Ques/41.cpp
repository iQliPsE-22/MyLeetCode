#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int firstMissingPositive(vector<int> &nums)
{
    set<int> s;
    int ans = 0;
    for (auto i : nums)
        s.insert(i);
    int i = 1;
    while (ans == 0)
    {
        auto it = s.find(i);
        if (it == s.end())
        {
            ans = i;
            break;
        }
        i++;
    }
    if (ans == 0)
        return nums.size();
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 0};
    int ans = firstMissingPositive(nums);
    cout << ans;
}