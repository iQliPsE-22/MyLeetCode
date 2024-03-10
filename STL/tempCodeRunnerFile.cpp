#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int sumOfDigits(int n)
{
    int sum = 0;
    while (n != 0)
    {
        int temp = n % 10;
        sum = sum + temp * temp;
        n = n / 10;
    }
    return sum;
}
bool isHappy(int n)
{
    bool loop = true;
    while (loop)
    {
        int sum = sumOfDigits(n);
        cout << sum << endl;
        if (sum == 1)
            return 1;
        else
        {
            n = sum;
        }
    }
    return 0;
}

int main()
{
    int n = 7;
    int sum = isHappy(n);
    cout << sum;
    return 0;
}