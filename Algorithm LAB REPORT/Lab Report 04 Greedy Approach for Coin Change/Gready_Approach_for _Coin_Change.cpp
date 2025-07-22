#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int greedyCoinChange(vector<int>& coins, int V) {

    sort(coins.rbegin(), coins.rend());

    int count = 0;
    for (int coin : coins) {
        while (V >= coin) {
            V -= coin;
            count++;
        }
    }

    if (V == 0)
        return count;
    else
        return -1;
}

int main() {
    vector<int> coins = {1, 5, 10, 25};
    int V = 63;

    int result = greedyCoinChange(coins, V);
    if (result != -1)
        cout << "Minimum coins needed: " << result << endl;
    else
        cout << "No solution possible" << endl;

    vector<int> coins2 = {1, 3, 4};
    V = 6;
    result = greedyCoinChange(coins2, V);
    cout << "Greedy coins needed (may be non-optimal): " << result << endl;

    return 0;
}

