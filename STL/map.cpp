#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> map{
        {"Deepak", 1},
        {"Rohit", 2},
        {"iQlipse", 3}};
    // for (const auto &key_value : map)
    // {
    //     string key = key_value.first;
    //     int value = key_value.second;
    //     cout << key << ":" << value << endl;
    // }

    
    auto it = map.begin();
    cout<<it->first;
    return 0;
}