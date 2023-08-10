#include<iostream>

// Function to find the highest common factor (HCF)
int main() {
    int a, b, small = 1, hfc;

    // Get input for two numbers
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    // Determine the smaller of the two numbers
    if (a < b) {
        small = a;
    } else {
        small = b;
    }
    
    // Find the HCF using a loop
    for (int i = 1; i < small + 1; i++) {
        if (a % i == 0 && b % i == 0) {
            hfc = i;
        }
    }
    
    // Display the HCF
    cout << "HCF of " << a << " and " << b << " is: " << hfc << endl;

    return 0;
}

// Added by Mandar - August 2023
