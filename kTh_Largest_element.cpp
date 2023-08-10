#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Function to find the kth largest element
int kthLargest(int arr[], int k, int n) {
    // Sort the array in ascending order
    sort(arr, arr + n);
    
    // Print the kth largest element
    cout << "The " << k << "th largest element is: " << arr[n - k] << endl;
    return 0;
}

int main() {
    // Program to find the kth largest element
    int k;
    int arr[] = {1, 9, 8, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Get the value of k from the user
    cout << "Enter the value of k: ";
    cin >> k;

    // Call the kthLargest function to find and display the kth largest element
    kthLargest(arr, k, n);

    return 0;
}

// Added by Mandar - August 2023
