#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t)
{
    if (s.length() != t.length())
        return 0;
    unordered_map<char, int> counter, counter2;
    for (char c : s)
        counter[c]++;
    for (char c : t)
        counter2[c]++;
    return counter == counter2;
}
int main()
{
    string s = "car";
    string t = "arc";
    bool ans = isAnagram(s, t);
    cout << ans;
    return 0;
}