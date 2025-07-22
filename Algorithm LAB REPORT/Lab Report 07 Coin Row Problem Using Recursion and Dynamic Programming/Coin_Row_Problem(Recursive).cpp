#include <iostream>
#include <vector>
using namespace std;

int coinRowRecursive(vector<int>& coins, int n) {
    if (n <= 0) return 0;
    if (n == 1) return coins[0];
    return max(coins[n - 1] + coinRowRecursive(coins, n - 2), coinRowRecursive(coins, n - 1));
}


int main() {
    vector<int> coins = {5, 1, 2, 10, 6, 2};
    int n = coins.size();

    cout << "Maximum amount using Recursion: " << coinRowRecursive(coins, n) << endl;
    return 0;
}
