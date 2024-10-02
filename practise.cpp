#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "ABC";
    if (s.find("A") != string::npos)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}