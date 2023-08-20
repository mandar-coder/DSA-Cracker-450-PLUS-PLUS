#include <bits/stdc++.h>
using namespace std;

// Function to find the minimum difference between
// maximum and minimum values of chocolate distribution
int findMinDiff(int arr[], int n, int m) {
    // If there are no chocolates or number
    // of students is 0
    if (m == 0 || n == 0)
        return 0;

    // Sort the given packets
    sort(arr, arr + n);

    // Number of students cannot be more than
    // the number of packets
    if (n < m)
        return -1;

    // Initialize the minimum difference
    int min_diff = INT_MAX;

    // Find the subarray of size m such that
    // the difference between the last (maximum in case
    // of sorted) and first (minimum in case of
    // sorted) elements of subarray is minimum.
    for (int i = 0; i + m - 1 < n; i++) {
        int diff = arr[i + m - 1] - arr[i];
        if (diff < min_diff)
            min_diff = diff;
    }
    return min_diff;
}

int main() {
    int n, m;

    cout << "Enter the number of packets: ";
    cin >> n;

    int arr[n];
    cout << "Enter the sizes of packets:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number of students: ";
    cin >> m;

    int result = findMinDiff(arr, n, m);
    if (result != -1) {
        cout << "Minimum difference is " << result;
    } else {
        cout << "Number of students cannot be more than the number of packets.";
    }

    return 0;
}
