#include <iostream>
using namespace std;
int sqrt(int x)
{
    int ans = 0;
    int odd = 1;
    while (x > 0)
    {
        if (x >= odd)
        {
            x -= odd;
            ans++;
        }
        else
            break;
        odd += 2;
    }
    return ans;
}
int main()
{
    int num = 8;
    cout << sqrt(num);
}