#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Floyd_triangle(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        int num = 1;
        for (int j = 0; j < i; j++)
            cout << num++;
        cout << endl;
    }
}
void inverted_Floyd_triangle(int rows)
{
    for (int i = rows; i > 0; i--)
    {
        int num = 1;
        for (int j = 0; j < i; j++)
            cout << num++;
        cout << endl;
    }
}

int main()
{
    int rows = 10;
    Floyd_triangle(rows);
    inverted_Floyd_triangle(rows);
    return 0;
}