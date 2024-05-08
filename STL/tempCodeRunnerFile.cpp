#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> people = {1, 2};
    int limit = 3;
    int ans = 0;
    int left = 0;
    int right = people.size() - 1;
    sort(people.begin(), people.end());
    while (left <= right)
    {
        if (people[left] + people[right] <= limit)
        {
            ans++;
            left++;
            right--;
        }
        else if (people[left] + people[right] > limit)
        {
            ans++;
            right--;
        }
        else
        {
            ans++;
            left++;
            right--;
        }
    }
    cout << ans;
    return 0;
}
