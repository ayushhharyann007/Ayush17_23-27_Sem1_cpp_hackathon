#include <iostream>
using namespace std;
int main() {
    int size;
    
    cout << "Enter the size of the array: ";
    cin >> size;
    
    if (size <= 0) {
        cout << "Invalid array size." << endl;
        return 1;
    }
    
    int arr[size];
    
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    // Remove duplicates
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size;) {
            if (arr[i] == arr[j]) {
                // Shift elements to the left to overwrite the duplicate
                for (int k = j; k < size - 1; ++k) {
                    arr[k] = arr[k + 1];
                }
                --size; // Reduce the size of the array
            } else {
                ++j;
            }
        }
    }

    cout << "Array with duplicates removed:" << endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << endl;

    return 0;
}
