#include <iostream>
#include <vector>
using namespace std;


int fibonacci_memo(int n, vector<int>& dp) {
    if (n <= 1)
        return n;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = fibonacci_memo(n - 1, dp) + fibonacci_memo(n - 2, dp);
}

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    vector<int> dp(n + 1, -1);
    cout << "Fibonacci (Top-down DP): " << fibonacci_memo(n, dp) << endl;

    return 0;
}

