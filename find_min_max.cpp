#include <iostream>
using namespace std;

// Function to find and display the minimum and maximum values in an array
void minmax(int arr[], int n) {
    int max_value, min_value;
    min_value = arr[0];
    max_value = arr[0];

    // Iterate through the array to find min and max values
    for (int i = 0; i < n; i++) {
        if (max_value < arr[i]) {
            max_value = arr[i];
        }
        if (min_value > arr[i]) {
            min_value = arr[i];
        }
    }

    // Display the maximum and minimum values
    cout << "Maximum value: " << max_value << endl;
    cout << "Minimum value: " << min_value << endl;
}

int main() {
    int n;

    // Get the number of elements in the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    // Get input for the array elements
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call the minmax function to find and display min and max values
    minmax(arr, n);

    return 0;
}

// Added by Mandar - August 2023
