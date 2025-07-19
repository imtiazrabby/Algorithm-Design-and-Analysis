#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int coinRowRecursive(const vector<int>& coins, int n) {
    if (n <= 0)
        return 0;
    if (n == 1)
        return coins[0];
    return max(coins[n-1] + coinRowRecursive(coins, n-2),
               coinRowRecursive(coins, n-1));
}

int main() {
    vector<int> coins = {5, 1, 2, 10, 6, 2};

    cout << "Using Recursion: " << coinRowRecursive(coins, coins.size()) << endl;
    return 0;
}
