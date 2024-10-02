#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool validPassword(string password)
{
    if (password.length() < 6)
    {
        cout << "less than 6" << endl;
        return false;
    }
    int lower = 0, upper = 0, num = 0;
    for (char c : password)
    {
        if (c == '/')
        {
            cout << "sLash" << endl;
            return false;
        }
        if (c == ' ')
        {
            cout << "spacce" << endl;
            return false;
        }
        if (c - '0' >= 0 && c - '0' <= 9)
            num++;
        if (c >= 'a' && c <= 'z')
            lower++;
        if (c >= 'A' && c <= 'Z')
            upper++;
    }
    if (num == 0 || upper == 0 || lower == 0)
        return false;
    return true;
}

int main()
{
    string password;
    getline(cin, password);
    if (validPassword(password))
    {
        cout << "Valid Password" << endl;
    }
    else
    {
        cout << "Invalid password, try again" << endl;
    }
    return 0;
}