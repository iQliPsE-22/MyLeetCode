#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int accounts[3][2] = {{1, 5},
                          {7, 3},
                          {3, 5}};

    int max = 0;
    int row = sizeof(accounts) / sizeof(accounts[0]);
    int columns = (sizeof(accounts) / sizeof(accounts[0][0])) / row;

    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        sum = 0;
        for (int j = 0; j < columns; j++)
        {
            sum = sum + accounts[i][j];
        }
        if (sum > max)
            max = sum;
    }
    cout << max;
    return 0;
}