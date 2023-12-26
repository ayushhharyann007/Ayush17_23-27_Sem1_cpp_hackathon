//Create a program to calculate the factorial of a number using recursion.
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1) {
        return 1; // Base case: factorial of 0 and 1 is 1.
    } else {
        return n * factorial(n - 1); // Recursive case: n! = n * (n-1)!
    }
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is undefined for negative numbers." << endl;
    } else {
        cout << "The factorial of " << num << " is " << factorial(num) << " ." << endl;
    }

    return 0;
}