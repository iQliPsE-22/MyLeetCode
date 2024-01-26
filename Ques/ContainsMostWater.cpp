#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int maxArea(vector<int> &height)
{
    int area = 1;
    int i = 0;
    int j = height.size() - 1;
    if (height.size() == 2)
    {
        if (height[0] == 0 || height[1] == 0)
            return 0;
    }
    while (i < j)
    {
        cout << height[i] << " " << height[j] << endl;
        int h = min(height[i], height[j]);
        cout << "h = " << h << endl;
        int w = abs(i - j);
        cout << "w = " << w << endl;
        int temp = h * w;
        if (temp > area)
        {
            area = temp;
            cout << "Area = " << area << endl;
        }
        if (height[i] > height[j])
        {
            j--;
        }
        else if (height[j] > height[i])
        {
            i++;
        }
        else
        {
            i++;
            j--;
        }
    }
    return area;
}
int main()
{
    vector<int> arr = {1, 0, 0, 0, 0, 0, 0, 2, 2};
    cout << maxArea(arr);
    return 0;
}
