#include <iostream>
using namespace std;

int fib_recursive(int n) {
    if (n <= 1)
        return n;
    return fib_recursive(n - 1) + fib_recursive(n - 2);
}
int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    cout << "Fibonacci using Recursion: " << fib_recursive(n) << endl;
    return 0;
}
