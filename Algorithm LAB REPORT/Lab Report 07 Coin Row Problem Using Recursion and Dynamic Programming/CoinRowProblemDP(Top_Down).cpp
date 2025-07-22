#include <iostream>
using namespace std;

int coinRowTopDown(int i,const vector<int>&coins,vector<int>& dp) {
    if (i < 0) return 0;
    if (dp[i] != -1) return dp[i];
    dp[i] = max(coins[i] + coinRowTopDown(i - 2, coins, dp), coinRowTopDown(i - 1, coins, dp));
    return dp[i];
}

int main() {
    vector<int> coins = {5, 1, 2, 10, 6, 2};
    int n = coins.size();
    vector<int> dp(n, -1);
    int max_sum = coinRowTopDown(n - 1, coins, dp);
    cout << "Maximum sum of coins: " << max_sum << endl;
    return 0;
}
