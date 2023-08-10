#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to move negative numbers to the beginning of the array
void move(vector<int>& arr) {
    sort(arr.begin(), arr.end());
}

int main() {
    // Program to move negative numbers to the beginning of the array
    vector<int> arr = { -1, 22, -31, 4, 55, 6, -71, 8, 93 };
    
    // Call the move function to sort the array
    move(arr);
    
    // Display the sorted array
    for (int e : arr)
        cout << e << " ";
    
    return 0;
}

// Added by Mandar - August 2023

