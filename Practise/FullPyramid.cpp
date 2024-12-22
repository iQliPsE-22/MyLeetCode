#include <iostream>
using namespace std;

void full_pyramid(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int k = 0; k < rows - i - 1; k++)
            cout << " ";
        for (int j = 0; j < 2 * i + 1; j++)
            cout << "*";
        cout << endl;
    }
}

void inverted_full_pyramid(int rows)
{
    for (int i = rows; i > 0; i--)
    {
        for (int k = 0; k < rows - i - 1; k++)
            cout << " ";
        for (int j = 0; j < 2 * i - 1; j++)
            cout << "*";
        cout << endl;
    }
}

int main()
{
    int rows = 10;
    full_pyramid(rows);
    inverted_full_pyramid(rows);
    return 0;
}