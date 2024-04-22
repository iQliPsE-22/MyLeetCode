#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// recursion

// int fib(int n)
// {
//     if (n == 1 || n == 2)
//         return 1;
//     return fib(n - 1) + fib(n - 2);
// }

// memoization

// int fib(int n, int memo[])
// {
//     if (memo[n] != -1)
//         return memo[n];
//     if (n == 1 || n == 2)
//         return 1;
//     memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
//     return memo[n];
// }

// bottom up approach
int fib(int n)
{
    if (n == 1 || n == 2)
        return 1;
    int memo[n + 1];
    memo[1] = 1;
    memo[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        memo[i] = memo[i - 1] + memo[i - 2];
    }
    return memo[n];
}
int main()
{
    int n;
    cin >> n;
    int memo[n + 1];
    // memset(memo, -1, sizeof(memo));
    while (n != 0)
    {
        cout << fib(n) << endl;
        n--;
    }
    return 0;
}