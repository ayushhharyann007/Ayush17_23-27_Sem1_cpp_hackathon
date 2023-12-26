//Write a C++ program to display the Fibonacci sequence up to N terms.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of Fibonacci :- ";
    cin >> n;

    int first = 0;
    int second = 1;
    int next;

    // Loop to generate and print the Fibonacci sequence
    for (int i = 0; i < n + 1 ; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    }
    return 0;
}