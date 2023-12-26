#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int number, originalNumber, remainder, result = 0;
    int n = 0; // Count the number of digits

    cout << "Enter an integer: ";
    cin >> number;

    originalNumber = number;

    // Count the number of digits in the number
    while (originalNumber != 0) {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

    // Calculate the sum of digits each raised to the power of n
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    // Check if it's an Armstrong number
    if (result == number) {
        cout << number << " is an Armstrong number." << std::endl;
    } else {
        cout << number << " is not an Armstrong number." << std::endl;
    }

    return 0;
}
