#include <iostream>
#include <vector>
using namespace std;

int knapsack(int n, int W, vector<int>& wt, vector<int>& val, vector<vector<int>>& dp) {
    if (n == 0 || W == 0)
        return 0;
    if (dp[n][W] != -1)
        return dp[n][W];

    if (wt[n - 1] <= W)
        dp[n][W] = max(val[n - 1] + knapsack(n - 1, W - wt[n - 1], wt, val, dp),
                       knapsack(n - 1, W, wt, val, dp));
    else
        dp[n][W] = knapsack(n - 1, W, wt, val, dp);

    return dp[n][W];
}

int main() {
    vector<int> weight = {10, 20, 30};
    vector<int> value = {60, 100, 120};
    int W = 50;
    int n = weight.size();

    vector<vector<int>> dp(n + 1, vector<int>(W + 1, -1));

    cout << "Maximum value in knapsack = " << knapsack(n, W, weight, value, dp) << endl;

    return 0;
}
