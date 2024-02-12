#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPalindrom(string str)
{
    string s = str;
    reverse(s.begin(), s.end());
    return str == s;
}
int countSubstrings(string s)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (isPalindrom(s.substr(i, j - i)) == 1)
            {
                count++;
                cout << s.substr(i, j - i) << endl;
            }
        }
    }
    return count;
}

int main()
{
    string s = "abc";
    cout << countSubstrings(s);
    return 0;
}