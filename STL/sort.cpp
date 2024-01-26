#include <iostream>
#include <vector>
using namespace std;

vector<int> funcsort(vector<int> &inputlist, int num)
{
    if (num > inputlist.size())
    {
        num = inputlist.size(); // Make sure num doesn't exceed the vector size
    }

    // Sort the first 'num' elements in ascending order
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i - 1; j++)
        {
            if (inputlist[j] > inputlist[j + 1])
            {
                // Swap elements
                int temp = inputlist[j];
                inputlist[j] = inputlist[j + 1];
                inputlist[j + 1] = temp;
            }
        }
    }

    // Sort the remaining elements in descending order
    for (int i = num; i < inputlist.size(); i++)
    {
        for (int j = num; j < inputlist.size() - 1; j++)
        {
            if (inputlist[j] < inputlist[j + 1])
            {
                // Swap elements
                int temp = inputlist[j];
                inputlist[j] = inputlist[j + 1];
                inputlist[j + 1] = temp;
            }
        }
    }

    return inputlist; // Return the sorted vector
}

int main()
{
    vector<int> inputlist = {11, 7, 5, 10, 46, 23, 16, 8};
    vector<int> sorted = funcsort(inputlist, 3);

    // Output the sorted and remaining elements
    for (int i = 0; i < sorted.size(); i++)
    {
        cout << sorted[i] << " ";
    }

    return 0;
}
