#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        // Print spaces
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        
        // Print stars
        for (int k = 1; k <= i; ++k) {
           cout << "*";
        }
        
        cout << "\n";
    }

    return 0;
}
