#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;

int RomTOInt(string s)
{
    map<char, int> rom;
    rom['I'] = 1;
    rom['V'] = 5;
    rom['X'] = 10;
    rom['L'] = 50;
    rom['C'] = 100;
    rom['D'] = 500;
    rom['M'] = 1000;
    int integer = 0;
    int curr = 0;
    int prev = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        curr = rom[s[i]];
        if (curr < prev)
            integer -= curr;
        else
            integer += curr;
        prev = curr;
    }
    return integer;
}
int main()
{
    string s = "IVI";
    cout << RomTOInt(s);
    return 0;
}