#include <iostream>
using namespace std;

// Function to cyclically rotate an array by one position
int rotate(int arr[], int n) {
    int end = arr[n - 1];
    
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = end;
    return 0;
}

int main() {
    // Program to cyclically rotate an array by one
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Display the original array
    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ",";
    }
    cout << endl;
    
    // Call the rotate function to cyclically rotate the array
    rotate(arr, n);

    // Display the rotated array
    cout << "Rotated Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ",";
    }

    return 0;
}

// Added by Mandar - August 2023
