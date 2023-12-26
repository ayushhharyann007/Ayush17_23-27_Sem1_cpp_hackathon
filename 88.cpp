#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // Print numbers from i-1 down to 1
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}
