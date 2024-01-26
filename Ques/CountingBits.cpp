#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 8;
    int temp = 0;
    int binary = 0;
    while (num > 0)
    {
        temp = num % 2;
        binary = binary * 10 + temp;
        num = num/2;
    }
    cout << binary;
    return 0;
}