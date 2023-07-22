#include <iostream>
using namespace std;

int main() {
    // Find LCM (not LCF)
    int a, b, greater, lcm;
    
    cin >> a;
    cin >> b;
    
    greater = (a > b) ? a : b;
    
    while (true) {
        if (greater % a == 0 && greater % b == 0) {
            lcm = greater;
            break;  // Terminate the loop once the LCM is found
        }
        greater++;
    }
    
    cout << "LCM: " << lcm << endl;
    
    return 0;
}
