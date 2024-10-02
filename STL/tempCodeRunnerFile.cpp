// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
    // Write C++ code here
    string S = "941686879370";
    int ans = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < S.length(); i++)
    {
        for (int j = 1; j <= S.length() - i; j++)
        {
            long long num = stoll(S.substr(i, j));
            if (num % 2 != 0 && mp[num] == 0)
            {
                ans++;
                mp[num] = 1;
            }
        }
    }
    cout << ans;
}