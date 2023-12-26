#include <iostream>
using namespace std;
int main() {
    int choice;
    double num1, num2, result;

    while (true) {
        // Display the menu
        cout << "Simple Calculator Menu:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        // Exit the program if the user chooses option 5
        if (choice == 5) {
            cout << "Exiting the calculator. Goodbye!" << endl;
            break;
        }

        // Get user input for two numbers
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        // Perform the selected operation and display the result
        switch (choice) {
            case 1:
                result = num1 + num2;
                cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
                break;
            case 2:
                result = num1 - num2;
                cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
                break;
            case 3:
                result = num1 * num2;
                cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
            default:
                cout << "Invalid choice. Please select a valid option (1-5)." << endl;
                break;
        }
    }

    return 0;
}
