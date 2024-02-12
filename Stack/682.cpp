#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int calPoints(vector<string> &operations)
{
    stack<int> ans;
    int sum = 0;
    for (string c : operations)
    {
        if (c == "C")
            ans.pop();

        else if (c == "D")
            ans.push(2 * ans.top());

        else if (c == "+")
        {
            int a = ans.top();
            ans.pop();
            int b = ans.top();
            ans.push(a);
            ans.push(a + b);
        }
        else
            ans.push(stoi(c));
    }
    while (!ans.empty())
    {
        sum += ans.top();
        ans.pop();
    }
    return sum;
}

int main()
{
    vector<string> operations = {"5", "-2", "4", "C", "D", "9", "+", "+"};
    cout << calPoints(operations);
    return 0;
}