#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter the number: ";
    cin >> number;

    cout << "Multiplication Table for " << number << ":\n";
    for (int i = 1; i <= 10; ++i) {
        cout << number << " x " << i << " = " << (number * i) << std::endl;
    }

    return 0;
}
