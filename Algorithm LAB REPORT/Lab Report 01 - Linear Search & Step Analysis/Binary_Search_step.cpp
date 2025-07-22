#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key, int &steps) {
    int low = 0, high = n - 1;
    steps = 0;
    while (low <= high) {
        steps++;
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key, steps, index;

    cout << "Enter the element to search: ";
    cin >> key;

    index = binarySearch(arr, n, key, steps);

    if (index != -1)
        cout << "Element found at index " << index << " in " << steps << " steps." << endl;
    else
        cout << "Element not found after " << steps << " steps." << endl;

    return 0;
}
