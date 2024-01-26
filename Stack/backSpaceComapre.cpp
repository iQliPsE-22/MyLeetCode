#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool backspaceCompare(string s, string t)
{
    stack<char> st;
    stack<char> ts;
    for (char c : s)
    {
        if (c == '#' && st.empty() == 0)
        {
            st.pop();
            continue;
        }
        st.push(c);
    }
    for (char c : t)
    {
        if (c == '#' && ts.empty() == 0)
        {
            ts.pop();
            continue;
        }
        ts.push(c);
    }

    return st == ts;
}

int main()
{
    string s = "y#fo##f";
    string t = "y#f#o##f";
    cout << backspaceCompare(s, t);
    return 0;
}