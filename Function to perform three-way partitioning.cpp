#include <iostream>
using namespace std;

// Function to perform three-way partitioning
void threeWayPartition(int arr[], int n, int lowVal, int highVal) {
    // Initialize next available positions for smaller (than range) and greater elements
    int start = 0, end = n - 1;

    // Traverse elements from left
    for (int i = 0; i <= end;) {
        // If the current element is smaller than the range, put it on the next available smaller position.
        if (arr[i] < lowVal) {
            // If 'i' and 'start' are the same, we can't swap. Swap only if 'i' is greater than 'start'.
            if (i == start) {
                start++;
                i++;
            } else {
                swap(arr[i++], arr[start++]);
            }
        }

        // If the current element is greater than the range, put it on the next available greater position.
        else if (arr[i] > highVal) {
            swap(arr[i], arr[end--]);
        } else {
            i++;
        }
    }
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

    int lowVal, highVal;
    cout << "Enter the low value of the range: ";
    cin >> lowVal;
    cout << "Enter the high value of the range: ";
    cin >> highVal;

    threeWayPartition(arr, n, lowVal, highVal);

    cout << "Modified array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
