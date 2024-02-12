#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
void findSubstringIndices(const string &str1, const string &str2)
{
    int n = str1.length();
    int k = str2.length();

    for (int i = 0; i < k; ++i)
    {
        if (str2.substr(i, n) == str1)
        {
            cout << i << " ";
        }   
    }
}

int main()
{
    int n = 3, k = 6;
    string str1 = "abc", str2 = "abcabc";
    findSubstringIndices(str1, str2);
    return 0;
}
