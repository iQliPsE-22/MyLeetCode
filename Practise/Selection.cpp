#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> selectionSort(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    return arr;
}
int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};
    vector<int> sortedArr = selectionSort(arr);
    for (int i = 0; i < sortedArr.size(); i++)
    {
        cout << sortedArr[i] << " ";
    }
    
    return 0;
}