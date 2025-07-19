#include <iostream>
#include <vector>
using namespace std;

int knapsack(int W, vector<int> weight, vector<int> value, int n) {
    vector<vector<int>> dp(n + 1, vector<int>(W + 1));

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (weight[i - 1] <= w)
                dp[i][w] = max(value[i - 1] + dp[i - 1][w - weight[i - 1]], dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }
    return dp[n][W];
}

int main() {
    int n = 4, W = 8;
    vector<int> weight = {2, 3, 4, 5};
    vector<int> value = {3, 4, 5, 6};

    cout << "Maximum value in Knapsack = " << knapsack(W, weight, value, n) << endl;
    return 0;
}

