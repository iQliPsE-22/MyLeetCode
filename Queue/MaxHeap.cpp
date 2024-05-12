#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> pq;
    vector<int> arr = {1, 2, 3, 5};
    vector<float> fractions;
    for (int i = 0; i < arr.size(); i++)
    {
        pq.push(arr[i]);
    }
    
    while (!pq.empty())
    {
        fractions.push_back(arr.back() / pq.top());
        pq.pop();
    }

    for (int i = 0; i < fractions.size(); i++)
    {
        cout << fractions[i] << " ";
    }
    return 0;
}