#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   queue<int> s;
   s.push(1);
   s.push(2);
   while (!s.empty())
   {
      cout << s.front() << " ";
      s.pop();
   }
   return 0;
}