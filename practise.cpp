#include <iostream>
#include <algorithm>
using namespace std;

string int_to_binary(int num)
{
    string ans = "";
    while (num > 0)
    {
        ans += to_string(num % 2);
        num = num / 2;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int num = 10;
    string ans = int_to_binary(num);
    cout << ans << endl;
    return 0;
}