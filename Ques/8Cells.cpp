#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size = 8;
    int arr[size] = {1, 0, 0, 0, 0, 1, 0, 0};
    int ans[size];
    int days = 1;
    for (int i = 0; i < days; i++)
    {
        ans[0] = 0;
        ans[size - 1] = 0;
        for (int i = 1; i < size - 1; i++)
        {
            ans[i] = arr[i - 1] ^ arr[i + 1];
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << ans[i] << "\t";
    }
    return 0;
}
// 0 1 0 0 1 0 1 0