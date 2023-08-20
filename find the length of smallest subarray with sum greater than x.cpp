#include <iostream>
using namespace std;

// Function to find the length of smallest subarray with sum greater than x
int smallestSubWithSum(int arr[], int n, int x) {
    // Initialize length of smallest subarray as n+1
    int min_len = n + 1;

    // Pick every element as the starting point
    for (int start = 0; start < n; start++) {
        // Initialize sum starting with the current start
        int curr_sum = arr[start];

        // If the first element itself is greater
        if (curr_sum > x) return 1;

        // Try different ending points for the current start
        for (int end = start + 1; end < n; end++) {
            // Add the last element to the current sum
            curr_sum += arr[end];

            // If the sum becomes more than x and the length of
            // this subarray is smaller than the current smallest
            // length, update the smallest length (or result)
            if (curr_sum > x && (end - start + 1) < min_len)
                min_len = (end - start + 1);
        }
    }
    return min_len;
}

// Driver program
int main() {
    int n, x;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the value of x: ";
    cin >> x;

    int res = smallestSubWithSum(arr, n, x);

    if (res == n + 1) {
        cout << "Not possible" << endl;
    } else {
        cout << "Length of smallest subarray with sum greater than " << x << " is " << res << endl;
    }

    return 0;
}
