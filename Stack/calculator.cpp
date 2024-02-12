#include <string>
#include <stack>
#include <algorithm>
#include <iostream>
using namespace std;
int calculate(string s)
{
    stack<int> nums;
    for (char c : s)
    {
        if (c != ' ' && isdigit(c))
            nums.push(c - '0');
    }
    while (nums.size() > 1)
    {
        cout << nums.top() << endl;
        nums.pop();
    }
    return nums.top();
}
int main()
{
    string s = "3+5 / 2 ";
    cout << calculate(s);
    return 0;
}