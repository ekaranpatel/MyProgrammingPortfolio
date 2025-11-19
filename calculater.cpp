#include <iostream>
using namespace std;

int main() {
    double a, b;
    int choice;

    cout << "----- Simple Calculator -----\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Exit\n";

    cout << "\nEnter your choice: ";
    cin >> choice;

    if (choice >= 1 && choice <= 4) {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    switch (choice) {
        case 1: cout << "Result = " << a + b; break;
        case 2: cout << "Result = " << a - b; break;
        case 3: cout << "Result = " << a * b; break;
        case 4:
            if (b == 0) cout << "Error! Division by zero.";
            else cout << "Result = " << a / b;
            break;
        case 5: cout << "Exiting..."; break;
        default: cout << "Invalid choice!";
    }

    return 0;
}
