#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 1) {
        cout << "The array should contain at least two elements." << endl;
        return 1; // Exit the program with an error code
    }

    int arr[n];
    
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int firstLargest = arr[0];
    int secondLargest = arr[1];

    if (secondLargest > firstLargest) {
        swap(firstLargest, secondLargest);
    }

    for (int i = 2; i < n; ++i) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
            secondLargest = arr[i];
        }
    }

      cout << "The second largest element in the array is: " << secondLargest << endl;

    return 0;
}
