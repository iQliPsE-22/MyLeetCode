#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> findKLargest(const vector<int> &nums, int k)
{
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Fill the min heap with the first k elements
    for (int i = 0; i < k; ++i)
    {
        minHeap.push(nums[i]);
    }

    // For the remaining elements, if an element is greater than the root of the min heap,
    // replace the root with the current element
    for (int i = k; i < nums.size(); ++i)
    {
        if (nums[i] > minHeap.top())
        {
            minHeap.pop();
            minHeap.push(nums[i]);
        }
    }

    // Copy the k largest elements from the min heap to a vector
    vector<int> result;
    while (!minHeap.empty())
    {
        result.push_back(minHeap.top());
        minHeap.pop();
    }

    return result;
}

int main()
{
    vector<int> nums = {3, 1, 5, 12, 2, 11};
    int k = 3;

    vector<int> result = findKLargest(nums, k);

    cout << "The " << k << " largest elements are: ";
    for (int i : result)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}