#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool power(int n)
{
    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;
    if (n % 2 != 0)
        return 0;
    return power(n / 2);
}
int main()
{
    int n = 10;
    cout << power(n);
    return 0;
}