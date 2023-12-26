#include <iostream>
using namespace std;
int main() {
    int number, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    int originalNumber = number;  // Store the original number for displaying later

    // Calculate the sum of digits using a do-while loop
    do {
        digit = number % 10;  // Extract the last digit
        sum += digit;        // Add the digit to the sum
        number /= 10;        // Remove the last digit
    } while (number != 0);

    // Display the result
    cout << "The sum of the digits of " << originalNumber << " is: " << sum << std::endl;

    return 0;
}
