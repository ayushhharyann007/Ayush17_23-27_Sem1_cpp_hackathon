#include <iostream>
using namespace std;
int main() {
    double base, exponent, result = 1.0;

    cout << "Enter the base number: ";
    cin >> base;

    cout << "Enter the exponent (a positive integer): ";
    cin >> exponent;

    if (exponent < 0) {
        cout << "Exponent should be a positive integer." << std::endl;
        return 1; // Exit the program with an error code
    }

    for (int i = 1; i <= exponent; ++i) {
        result *= base;
    }

    cout << base << " raised to the power " << exponent << " is: " << result << std::endl;

    return 0;
}
