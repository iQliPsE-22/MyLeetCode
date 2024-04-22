#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int min_cost_to_generate_web_fluid(int N, int x, int y, int z) {
    vector<int> dp(N + 1, INT_MAX);
    dp[1] = 0;

    for (int i = 2; i <= N; ++i) {
        dp[i] = min(dp[i], dp[i / 2] + x);
        dp[i] = min(dp[i], dp[i - 1] + y);
        if (i + 1 <= N) {
            dp[i] = min(dp[i], dp[i + 1] + z);
        }
    }

    return dp[N];
}

int main() {
    int N = 5;
    int x = 2, y = 1, z = 3;
    cout << min_cost_to_generate_web_fluid(N, x, y, z) << endl;  // Output: 5

    return 0;
}
