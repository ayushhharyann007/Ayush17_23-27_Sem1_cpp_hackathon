#include<iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows

    // Loop for each row
    for(int i = 1; i <= n; i++) {

        // Loop for each column
        for(int j = 1; j <= n; j++) {

            // Print '*' for first and last row, and first and last column
            if(i == 1 || i == n || j == 1 || j == n) {
                cout << "*";
            }
            else {
                cout << " "; // Print a space for other positions
            }
        }

        cout << endl; // Move to the next line after each row
    }

    return 0;
}