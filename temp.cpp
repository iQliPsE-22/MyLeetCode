#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string timeConversion(string s)
{
    int l = s.length() - 1;
    int hour = static_cast<int>(s[0] - '0') * 10 + static_cast<int>(s[1] - '0');
    if (s[l - 1] == 'P')
    {
        hour = hour + 12;
        if (hour == 24)
            hour = 12;
    }
    else if (s[l - 1] == 'A' && hour == 12)
        hour = 0;
    char ten = (hour % 10 + '0');
    hour /= 10;
    char hun = '0';
    // cout<<hour;
    if (hour >= 1)
    {
        hun = (hour % 10 + '0');
    }
    s[0] = hun;
    s[1] = ten;
    s.pop_back();
    s.pop_back();
    return s;
}
int main()
{
    string s = "07:05:45PM";
    string result = timeConversion(s);
    cout << result;
    return 0;
}