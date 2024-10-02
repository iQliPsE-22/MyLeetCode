#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> topKFrequent(vector<int> &nums, int k)
{
    vector<int> ans;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
    unordered_map<int, int> mp;
    for (int i : nums)
    {
        mp[i]++;
    }

    for (auto i : mp)
    {
        minHeap.push({i.second, i.first});
        if (minHeap.size() > k)
        {
            minHeap.pop();
        }
    }

    while (!minHeap.empty())
    {
        ans.push_back(minHeap.top().second);
        minHeap.pop();
    }
    return ans;
}

int main()
{

    vector<int> v = {3, 2, 3, 1, 2, 4, 5, 5, 6, 7, 7, 8, 2, 3, 1, 1, 1, 10, 11, 5, 6, 2, 4, 7, 8, 5, 6};

    int k = 10;
    vector<int> ans = topKFrequent(v, k);
    for (int i : ans)
    {
        cout << i << " ";
    }
}
