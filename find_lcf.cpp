#include <iostream>
using namespace std;

int main() {
    // Program to find LCM (Least Common Multiple)
    int a, b, greater, lcm;
    
    // Get input for two numbers
    cin >> a >> b;
    
    // Determine the greater of the two numbers
    greater = (a > b) ? a : b;
    
    // Find the LCM using a loop
    while (true) {
        if (greater % a == 0 && greater % b == 0) {
            lcm = greater;
            break;  // Terminate the loop once the LCM is found
        }
        greater++;
    }
    
    // Display the LCM
    cout << "LCM: " << lcm << endl;
    
    return 0;
}

// Added by Mandar - August 2023
