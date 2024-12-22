#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void left_half_pyramid(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i + 1; j++)
            cout << " ";
        for (int k = 0; k < i; k++)
            cout << "*";
        cout << endl;
    }
}

void inverted_left_half_pyramid(int rows)
{
    for (int i = rows; i > 0; i--)
    {
        {
            for (int j = 0; j < rows - i + 1; j++)
                cout << " ";
            for (int k = 0; k < i; k++)
                cout << "*";
            cout << endl;
        }
    }
}
int main()
{
    int rows = 10;
    left_half_pyramid(rows);
    inverted_left_half_pyramid(rows);
    return 0;
}