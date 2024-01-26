#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string mergeAlternately(string word1, string word2)
{
    string ans = "";
    string big = word2;
    string small = word1;
    int l = word1.length();
    if (l > word2.length())
    {
        l = word2.length();
        big = word1;
        small = word2;
    }
    int diff = big.length() - small.length();
    int i = 0;
    for (i = 0; i < l; i++)
    {
        ans = ans + word1[i] + word2[i];
    }
    if (diff > 0)
    {
        for (i; i < big.length(); i++)
        {
            ans = ans + big[i];
        }
    }
    return ans;
}
int main()
{
    string s = "cdf";
    string a = "p";
    string ans = mergeAlternately(s, a);
    cout << ans;
    return 0;
}