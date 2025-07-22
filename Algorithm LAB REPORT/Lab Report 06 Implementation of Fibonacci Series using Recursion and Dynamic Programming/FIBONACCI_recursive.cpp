#include <iostream>
#include <vector>
using namespace std;

int fibonacci_recursive(int n) {
    if (n <= 1)
        return n;
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}


int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    cout << "Fibonacci (Recursion): " << fibonacci_recursive(n) << endl;

    return 0;
}
