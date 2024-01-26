#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int maxOperations(vector<int> &nums, int k)
{
    int i = 0;
    int j = nums.size() - 1;
    int op = 0;
    while (i < j)
    {
        if (nums[i] + nums[j] == k)
        {
            op++;
        }
        i++;
        j--;
    }
    return op;
}
int main()
{
    vector<int> Arr = {4, 4, 1, 3, 1, 3, 2, 2, 5, 5, 1, 5, 2, 1, 2, 3, 5, 4};
    cout << "The maximum number of operations is: " << maxOperations(Arr, 6);
    return 0;
}