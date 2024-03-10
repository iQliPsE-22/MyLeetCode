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
    unordered_set<int> seen;
    while (n != 1 && !seen.count(n))
    {
        seen.insert(n);
        n = sumOfDigits(n);
    }
    return n == 1;
}

int main()
{
    int n = 536;
    int sum = isHappy(n);
    cout << "result:" << sum;
    return 0;
}