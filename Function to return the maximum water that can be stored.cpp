#include <bits/stdc++.h>
using namespace std;

// Function to return the maximum water that can be stored
int maxWater(int arr[], int n) {
    // To store the maximum water that can be stored
    int res = 0;

    // For every element of the array
    for (int i = 1; i < n - 1; i++) {

        // Find the maximum element on its left
        int left = arr[i];
        for (int j = 0; j < i; j++)
            left = max(left, arr[j]);

        // Find the maximum element on its right
        int right = arr[i];
        for (int j = i + 1; j < n; j++)
            right = max(right, arr[j]);

        // Update the maximum water
        res = res + (min(left, right) - arr[i]);
    }

    return res;
}

// Driver code
int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Maximum water that can be stored: " << maxWater(arr, n);

    return 0;
}
