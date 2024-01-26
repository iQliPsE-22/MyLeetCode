#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string reverseVowels(string s)
{
    int i = 0;
    int j = s.length() - 1;
    while (i < j)
    {
        while (i < j)
        {
            if (tolower(s[i]) == 'a' || tolower(s[i]) == 'i' || tolower(s[i]) == 'e' || tolower(s[i]) == 'o' || tolower(s[i]) == 'u')
                break;
            else
                i++;
        }
        while (j > i)
        {
            if (tolower(s[j]) == 'a' || tolower(s[j]) == 'i' || tolower(s[j]) == 'e' || tolower(s[j]) == 'o' || tolower(s[j]) == 'u')
                break;
            else
                j--;
        }
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    return s;
}
int main()
{
    string s = "aA";
    cout << reverseVowels(s);
    return 0;
}