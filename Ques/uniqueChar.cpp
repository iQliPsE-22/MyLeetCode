#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "tuvwxyzabcdefghijklmnopqrs";
    unordered_map<char, int> map;
    for (char c : s)
    {
        map[c]++;
    }
    char ans;
    int index = -1;
    for (int i = 0; i < s.length(); i++)
    {
        auto it = map.find(s[i]);
        if (it->first == s[i] && it->second == 1)
        {

            index = i;
            break;
        }
    }
    cout << index;
}