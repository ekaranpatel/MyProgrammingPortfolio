#include <iostream>
using namespace std;

int main() {
    int balance = 5000;
    int choice, amount;

    cout << "----- ATM Menu -----\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "4. Exit\n";

    cout << "\nEnter choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Your Balance = " << balance;
            break;

        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;  balance += amount;
            cout << "Updated Balance = " << balance;
  break;

        case 3:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if (amount > balance)
                cout << "Insufficient balance!";
            else {
                balance -= amount;
                cout << "Updated Balance = " << balance;
            }
            break;

        case 4:
            cout << "Thanks for using ATM!";
            break;

        default:
            cout << "Invalid option!";
    } return 0;
}
