#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> pascal;
    if (numRows == 0)
        return pascal;
    pascal.push_back({1});
    pascal.push_back({1, 1});
    for (int i = 2; i < numRows; i++)
    {
       vector<int>row;
        row.push_back(1);
        for (int j = 1; j < i; j++)
        {
            row.push_back(pascal[i - 1][j - 1] + pascal[i - 1][j]);
        }
        row.push_back(1);
        pascal.push_back(row);
    }
    return pascal;
}
int main()
{
    vector<vector<int>> pascalTriangle;
    int n = 10;
    pascalTriangle = generate(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << pascalTriangle[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}