#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string reverseWord(string s)
{
    int i = 0;
    int j = s.length() - 1;
    while (i < j)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    istringstream ss(s);
    string word;
    string ans = "";
    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        ans += word + " ";
    }
    return ans;
}
int main()
{
    string s = "Hello World my";
    cout << reverseWord(s) << endl;
    return 0;
}