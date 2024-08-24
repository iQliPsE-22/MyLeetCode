#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    unordered_map<string, vector<string>> mp;
    for (auto s : strs)
    {
        string t = s;
        sort(t.begin(), t.end());
        mp[t].push_back(s);
    }
    vector<vector<string>> res;
    for (auto p : mp)
    {
        res.push_back(p.second);
    }
    return res;
}

int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> res = groupAnagrams(strs);
    for (auto v : res)
    {
        for (auto s : v)
        {
            cout << s << " ";
        }
        cout << endl;
    }
    return 0;
}