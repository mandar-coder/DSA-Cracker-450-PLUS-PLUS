#include <iostream>
using namespace std;

// Function to sort an array of 0s, 1s, and 2s
void sort123(int arr[], int n) {
    int low = 0;
    int mid = 0;
    int high = n - 1;
    
    while (mid <= high) {
        switch (arr[mid]) {
            case 0:
                swap(arr[low++], arr[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid], arr[high--]);
                break;
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Program to sort an array of 0s, 1s, and 2s
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements (0, 1, or 2): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call the sort123 function to sort the array
    sort123(arr, n);

    // Call the printArray function to display the sorted array
    cout << "Sorted Array: ";
    printArray(arr, n);

    return 0;
}

// Added by Mandar - August 2023
