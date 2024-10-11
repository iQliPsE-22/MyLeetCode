#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> part_money(vector<int> fee, vector<int> fun, int budget)
{
    vector<int> ans;
    int curr_fee = 0;
    int curr_fun = 0;
    int i = 0;
    while (curr_fee + fee[i] < budget && i < fee.size())
    {
        curr_fee += fee[i];
        curr_fun += fun[i];
        i++;
    }
    for (int j = i; j < fee.size(); j++)
    {
        if (fun[j] > fun[j - 1] && (curr_fee - fee[j - 1] + fee[j]) <= budget)
        {
            curr_fee -= fee[j - 1];
            curr_fee += fee[j];
            curr_fun += fun[j];
        }
    }
    ans.push_back(curr_fee);
    ans.push_back(curr_fun);
    return ans;
}

int main()
{
    vector<int> fee = {12, 5, 16, 16, 10, 21, 18, 12, 17, 18, 50, 13, 19, 16, 12, 10, 12, 13, 15, 11, 16, 0};
    vector<int> fun = {3, 8, 9, 6, 2, 9, 4, 4, 8, 9, 10, 8, 10, 8, 9, 2, 8, 5, 5, 7, 2, 0};
    int budget = 50;
    vector<int> result = part_money(fee, fun, budget);
    cout << "Total fee: " << result[0] << endl;
    cout << "Total fun: " << result[1] << endl;

    return 0;
}
