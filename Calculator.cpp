#include <bits/stdc++.h>
using namespace std;

int main() {
    char option;
    do {
        int choice;
        float num1, num2;

        // taking the numbers to be operated
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        // menu of the operations
        cout << "Choose operation:" << endl;
        cout << "1. Addition (+)" << endl;
        cout << "2. Subtraction (-)" << endl;
        cout << "3. Multiplication (*)" << endl;
        cout << "4. Division (/)" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        // result
        switch(choice) {
            case 1:
                cout << "Sum: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Difference: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Multiplication: " << num1 * num2 << endl;
                break;
            case 4:
                if(num2 != 0)
                    cout << "Division: " << num1 / num2 << endl;
                else
                    cout << "Error! Can't divide by zero." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }

        // reusing calculator or exiting
        cout << "Do you want to reuse the calculator? (Y/N): ";
        cin >> option;
    } while (option == 'Y' || option == 'y');

    cout << "Exiting calculator. Goodbye!" << endl;

    return 0;
}
