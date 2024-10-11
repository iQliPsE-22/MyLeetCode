#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binart_to_decimal(string num)
{
    int ans = 0;
    int power = 0;
    for (int i = num.size() - 1; i >= 0; i--)
    {
        if (num[i] == '1')
        {
            ans += pow(2, power);
        }
        power++;
    }
    return ans;
}

int main()
{
    string num = "1010";
    int ans = binart_to_decimal(num);
    cout << ans << endl;
    return 0;
}