#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int> &nums)
{
    int l = nums.size();
    int i = 0;
    int j = i + 1;
    for (i = 0; i < l; i++)
    {
        if (nums[i] == 0 && nums[i + 1] != l - 1)
        {
            int temp = nums[i];
            int temp2 = nums[i + 1];
            if (temp2 == 0)
            {
                for (j = i; i < l; j++)
                {
                    if (nums[j] != 0)
                    {
                        temp2 = nums[j];
                    }
                }
            }
            nums[i] = temp2;
        }
    }
}
int main()
{
    vector<int> arr{1, 0, 2, 0, 3};
    moveZeroes(arr);
    for (auto i : arr)
    {
        cout << i;
    }
    return 0;
}