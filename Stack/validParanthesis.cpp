#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s)
{
    stack<char> brackets;
    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            brackets.push(c);
        }
        else if (c == ')' || c == '}' || c == ']')
        {
            if (brackets.empty())
            {
                return false; // No matching opening bracket found
            }
            char top = brackets.top();
            if ((c == ')' && top == '(') ||
                (c == '}' && top == '{') ||
                (c == ']' && top == '['))
            {
                brackets.pop();
            }
            else
            {
                return false; // Mismatched brackets
            }
        }
    }
    return brackets.empty(); // Check if all brackets are matched
}

int main()
{
    string s = "(]";
    cout << isValid(s);
    return 0;
}
