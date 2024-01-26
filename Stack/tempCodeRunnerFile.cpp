#include <iostream>
#include <bits/stdc++.h>
#include <stack>

using namespace std;
string removeStars(string s)
{
   stack<char> stars;
   string ans = "";
   for (char c : s)
   {
      if (c != '*')
         stars.push(c);
      if (c == '*')
         stars.pop();
   }
   while (!stars.empty())
   {
      ans += stars.top();
      stars.pop();
   }
   reverse(ans.begin(), ans.end());
   return ans;
}

int main()
{
   string s = "leet**cod*e";
   cout << removeStars(s); // leetcod
   return 0;
}