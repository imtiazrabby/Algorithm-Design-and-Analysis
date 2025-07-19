#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key, int &steps) {
    steps = 0;
    for (int i = 0; i < n; i++) {
        steps++;
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {4, 2, 7, 1, 9, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key, steps, index;

    cout << "Enter the element to search: ";
    cin >> key;

    index = linearSearch(arr, n, key, steps);

    if (index != -1)
        cout << "Element found at index " << index << " in " << steps << " steps." << endl;
    else
        cout << "Element not found after " << steps << " steps." << endl;

    return 0;
}


