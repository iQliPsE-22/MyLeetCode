#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void right_half_pyramid(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
            cout << "*";
        cout << endl;
    }
}

void inverted_right_half_pyramid(int rows)
{
    for (int i = rows; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
            cout << "*";
        cout << endl;
    }
}

int main()
{
    int rows = 10;
    right_half_pyramid(rows);

    inverted_right_half_pyramid(rows);
    return 0;
}