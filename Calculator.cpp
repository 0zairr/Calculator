// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
File name: Calculator.cpp
Programer: Ozair Ghaissi
Date: 10/31/2024

*/

#include <iostream>
#include <cmath> // for power function
using namespace std;

void calculator() {
    int choice;
    double num1, num2, result;

    do {
        cout << "\nChoose an operation:\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "5. Power\n";
        cout << "6. Exit\n";
        cout << "Enter the number of the operation (1-6): ";
        cin >> choice;

        if (choice >= 1 && choice <= 5) {
            cout << "Enter the first number: ";
            cin >> num1;
            cout << "Enter the second number: ";
            cin >> num2;
        }

        switch (choice) {
        case 1:
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            }
            else {
                cout << "Error: Division by zero." << endl;
            }
            break;
        case 5:
            result = pow(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case 6:
            cout << "Exiting calculator. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);
}

int main() {
    calculator();
    return 0;
}