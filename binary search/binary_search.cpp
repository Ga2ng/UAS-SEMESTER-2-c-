#include <iostream>
using namespace std;

// Binary search function
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;  // Element not found
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int index = binarySearch(arr, size, target);
    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found in the array." << endl;

    return 0;
}
