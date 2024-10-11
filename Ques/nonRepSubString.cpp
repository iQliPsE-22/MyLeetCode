#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void non_Repeating_Substring(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i; j < s.size(); j++)
        {
            cout << s.substr(i, j) << endl;
        }
    }
}

int main()
{
    string s = "abcde";
    non_Repeating_Substring(s);
    return 0;
}