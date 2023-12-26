#include <iostream>
using namespace std;
int main() {
    int N;
    int sum = 0;

    // Prompt the user to enter N
    cout << "Enter a positive integer N: ";
    cin >> N;

    // Check if N is non-negative
    if (N <= 0) {
        std::cout << "Please enter a positive integer for N." << std::endl;
        return 1; // Exit the program with an error code
    }

    // Calculate the sum of even numbers from 1 to N
    for (int i = 2; i <= N; i += 2) {
        sum += i;
    }

    // Display the result
    std::cout << "The sum of all even numbers between 1 and " << N << " is: " << sum << std::endl;

    return 0;
}
