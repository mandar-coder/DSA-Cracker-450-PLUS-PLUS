// Program: Fibonacci Series Generator
#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    // Get the number of terms in the Fibonacci series from the user.
    cout << "Enter the number of terms: ";
    cin >> n;

    // Display a header for the Fibonacci series output.
    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        // Print the first term (0) for the Fibonacci sequence.
        if (i == 1) {
            cout << t1 << ", ";
            continue;
        }
        // Print the second term (1) for the Fibonacci sequence.
        if (i == 2) {
            cout << t2 << ", ";
            continue;
        }

        // Calculate the next term in the Fibonacci sequence.
        nextTerm = t1 + t2;
        t1 = t2; // Update t1 to the value of t2.
        t2 = nextTerm; // Update t2 to the calculated next term.

        // Print the calculated next term.
        cout << nextTerm << ", ";
    }

    // The Fibonacci series generation is complete.    
    return 0;
}
// Added by Mandar - August 2023
