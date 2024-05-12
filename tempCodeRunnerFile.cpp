#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<string> findRelativeRanks(vector<int> &score)
{
    vector<string> ans;
    int max = -1;
    int max2 = -1;
    int max3 = -1;
    for (int i = 0; i < score.size(); i++)
    {
        ans.push_back(to_string(score[i]));
        if (score[i] > max)
        {
            max3 = max2;
            max2 = max;
            max = score[i];
        }
        else if (score[i] > max2)
        {
            max3 = max2;
            max2 = score[i];
        }
        else if (score[i] > max3)
            max3 = score[i];
    }
    cout << max << " " << max2 << " " << max3 << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] == to_string(max))
            ans[i] = "Gold Medal";
        if (ans[i] == to_string(max2))
            ans[i] = "Silver Medal";
        if (ans[i] == to_string(max3))
            ans[i] = "Bronze Medal";
    }
    return ans;
}
int main()
{

    vector<int> score = {5, 4, 3, 2, 1};
    vector<string> ans = findRelativeRanks(score);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "\t";
    }
    return 0;
}