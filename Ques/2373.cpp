// 2373. Largest Local Values in a Matrix
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> largestLocal(vector<vector<int>> &grid)
{
    vector<vector<int>> ans(grid.size() - 2, vector<int>(grid.size() - 2));
    for (int i = 0; i < grid.size() - 2; i++)
    {
        for (int j = 0; j < grid.size() - 2; j++)
        {
            int max = -1;
            for (int k = i; k < i + 3; k++)
            {
                for (int l = j; l < j + 3; l++)
                {
                    if (grid[k][l] > max)
                    {
                        max = grid[k][l];
                    }
                }
            }
            ans[i][j] = max;
        }
    }
    return ans;
}

int main()
{
    // Enter values in the matrix
    vector<vector<int>> matrix = {{1, 2, 3, 4},
                                  {5, 6, 7, 8},
                                  {9, 10, 11, 12},
                                  {13, 14, 15, 16}};

    vector<vector<int>> grid = largestLocal(matrix);

    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}