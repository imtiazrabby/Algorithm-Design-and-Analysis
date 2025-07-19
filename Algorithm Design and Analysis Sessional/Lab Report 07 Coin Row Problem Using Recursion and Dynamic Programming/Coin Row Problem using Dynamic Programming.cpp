#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int coinRowDP(const vector<int>& coins) {
    int n = coins.size();
    if (n == 0) return 0;
    if (n == 1) return coins[0];

    vector<int> dp(n+1);
    dp[0] = 0;
    dp[1] = coins[0];

    for (int i = 2; i <= n; i++) {
        dp[i] = max(coins[i-1] + dp[i-2], dp[i-1]);
    }

    return dp[n];
}

int main() {
    vector<int> coins = {5, 1, 2, 10, 6, 2};

    cout << "Using Dynamic Programming: " << coinRowDP(coins) << endl;

    return 0;
}
