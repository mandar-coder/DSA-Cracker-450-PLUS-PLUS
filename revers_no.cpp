#include <iostream>
using namespace std;

// Function to reverse an array or string
int reverseArray(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    return 0;
}

// Function to print the array
int printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

int main() {
    // Program to reverse an array
    int arr[] = {1, 2, 3, 4, 5, 6};
    
    int n = sizeof(arr) / sizeof(arr[0]);

    // Display the original array
    cout << "Original Array: ";
    printArray(arr, n);
    
    // Reverse the array
    reverseArray(arr, 0, n - 1);

    // Display the reversed array
    cout << "Reversed Array: ";
    printArray(arr, n);
    
    return 0;
}

// Added by Mandar - August 2023
