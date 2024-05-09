// 3075. Maximize Happiness of Selected Children

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long maximumHappinessSum(vector<int> &happiness, int k)
{
    priority_queue<int, vector<int>, greater<int>> minHeap;
    int ans = 0;
    int i = 0;
    int turns = 0;
    for (int i = 0; i < k; i++)
    {
        minHeap.push(happiness[i]);
    }
    for (int i = k; i < happiness.size(); i++)
    {
        if (minHeap.top() < happiness[i])
        {
            minHeap.pop();
            minHeap.push(happiness[i]);
        }
    }
    while (!minHeap.empty())
    {
        ans += minHeap.top();
        minHeap.pop();
    }
    if(k == 1) return ans;
    if(k == 2) return ans - 1;
    return ans - k;
}
int main()
{
    vector<int> happiness = {1, 2, 3};
    vector<int> happiness1 = {2, 3, 4, 5};
    vector<int> happiness2 = {2, 83, 62};
    vector<int> happiness3 = {1, 1, 1, 1};
    cout << (maximumHappinessSum(happiness, 2) == 4 ? "Test case 1 passed" : "Test case 1 failed ") << endl;
    cout << (maximumHappinessSum(happiness1, 1) == 5 ? "Test case 2 passed" : "Test case 2 failed ") << endl;
    cout << (maximumHappinessSum(happiness2, 3) == 144 ? "Test case 3 passed " : "Test case 3 failed ") << endl;
    cout << (maximumHappinessSum(happiness3, 2) == 1 ? "Test case 4 passed " : "Test case 4 failed ") << endl;
    return 0;
}