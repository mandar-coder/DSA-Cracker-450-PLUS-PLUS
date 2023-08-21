#include <iostream>
using namespace std;

// Function to find minimum swaps required to arrange elements less than or equal to k together
int minSwap(int *arr, int n, int k) {
    // Count the number of elements that are less than or equal to k
    int count = 0;
    for (int i = 0; i < n; ++i)
        if (arr[i] <= k)
            ++count;

    // Count the number of unwanted elements in the initial window of size 'count'
    int bad = 0;
    for (int i = 0; i < count; ++i)
        if (arr[i] > k)
            ++bad;

    // Initialize answer with the 'bad' value of the initial window
    int ans = bad;
    // Slide the window and update 'bad' count and answer
    for (int i = 0, j = count; j < n; ++i, ++j) {
        if (arr[i] > k)
            --bad;  // Decrement 'bad' count for the element that is no longer in the window
        if (arr[j] > k)
            ++bad;  // Increment 'bad' count for the element that enters the window
        ans = min(ans, bad);  // Update the answer with the minimum 'bad' count
    }
    return ans;  // Return the minimum swaps required
}

int main() {
    cout << "Minimum Swaps to Arrange Elements Less Than or Equal to k Together\n";
    
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the value of k: ";
    cin >> k;

    cout << "Minimum swaps required: " << minSwap(arr, n, k) << "\n";

    delete[] arr;  // Free the dynamically allocated array memory
    return 0;
}
