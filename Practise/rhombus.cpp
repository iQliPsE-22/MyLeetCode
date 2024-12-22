#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rhombus(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int j = 0; j < rows; j++)
            cout << "* ";
        cout << endl;
    }
}
void inverted_rhombus(int rows)
{
    for (int i = rows; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int j = 0; j < rows; j++)
            cout << "* ";
        cout << endl;
    }
}

int main()
{
    int rows = 10;
    rhombus(rows);
    inverted_rhombus(rows);
    return 0;
}