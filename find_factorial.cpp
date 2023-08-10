#include <iostream>

// Function to find factorial
int factorial(int n) {
    if (n < 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
    return 0;
}

int main() {
    int n;

    // Get input from the user
    std::cout << "Enter a number: ";
    std::cin >> n;

    // Calculate and display the factorial
    std::cout << "Factorial of " << n << " is: " << factorial(n);

    return 0;
}

// Added by Mandar - August 2023
