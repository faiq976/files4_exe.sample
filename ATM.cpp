#include <iostream>
using namespace std;
int main()
{
    int pin;
    int balance = 1000;
    for (int i = 1; i <= 3; i = i + 1)
    {
        cout << "Enter ATM pin:";
        cin >> pin;
        if (pin == 1234)
        {
            cout << "Login successful!";
        }
        else
        {
            cout << "Wrong Pin!";
        }
        if (i == 3 && pin != 1234)
        {
            cout << "Too many attempts,Card is blocked";
            return 0;
        }
        for (int i = 1; i <= 5; i = i + 1)
            cout << endl "-----ATM Menu-----" << endl;
        cout << "1.Check Balance" << endl;
        cout << "2.Deposit Money" << endl;
        cout << "3.Withdraw Money" << endl;
        cout << "4.Exit" << endl;
        int choice;
        cout << "Enter your choice:";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Current balance:" << balance << endl;
        }
        else if (choice == 2)
        {
            int deposit;
            cout << "Enter amount to deposit:";
            cin >> deposit;
            cout << "Money Deposited Successfully!" << endl;
            balance += deposit;
        }
        else if (choice == 3)
        {
            int withdraw;
            cout << "Enter amount to withdraw:";
            cin >> withdraw;
            if (withdraw > balance)
            {
                cout << "Insufficient Balance!";
            }
            else
            {
                cout << "Please collect your cash!";
                balance -= withdraw;
            }
        }
        else if (choice == 4)
        {
            cout << "Thank you for using the ATM.";
            break;
        }
        else
        {
            cout << "Invalid choice." << endl;
        }
    }
}