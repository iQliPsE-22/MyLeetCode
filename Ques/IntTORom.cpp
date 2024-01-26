#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 35;
    string roman = "";
    map<int, char> rom;
    rom[1] = 'I';
    rom[5] = 'V';
    rom[10] = 'X';
    rom[50] = 'L';
    rom[100] = 'C';
    rom[500] = 'D';
    rom[1000] = 'M';
    for (auto it = rom.begin(); it != rom.end(); it++)
    {
        if (it->first == num)
        {
            roman += it->second;
            cout << it->first << endl;
            break;
        }
        else
        {
            int temp = num;
            int pos = 10;

            while (temp != 0)
            {
                int temp1 = num % 10;
                if (pos == 1)
                    roman += rom.find(temp1)->second;
                else if(temp1 % 1 == 0)
                pos *= 10;
                temp /= 10;
            }
        }
    }
    cout << roman;
    return 0;
}