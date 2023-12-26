#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print decreasing numbers from i to 1
        for (int j = i; j >= 1; j--) {
            cout << j;
        }

        // Print increasing numbers from 2 to i
        for (int j = 2; j <= i; j++) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}

