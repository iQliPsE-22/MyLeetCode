#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Stack
{
    static const int max_size = 100;
    int arr[max_size];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    void push(int value)
    {
        if (top >= max_size - 1)
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            arr[++top] = value;
        }
    }
    int pop()
    {
        if (top == -1)
            cout << "Stack Empty" << endl;
        return arr[top--];
    }
    bool isEmpty()
    {
        return top < 0;
    }
};
int main()
{
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);
    stack.push(7);
    while (!stack.isEmpty())
    {
        cout << stack.pop() << " ";
    }
    return 0;
}