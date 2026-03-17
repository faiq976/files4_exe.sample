#include <iostream>
using namespace std;
int main()
{
    string choice, bookname;
    {
        cout << "________LIBRARY SYSTEM__________";
        cout << "1.Add the Books" << endl;
        cout << "2.View Books" << endl;
        cout << "3.Borrow Books" << endl;
        cout << "4.Issue Book" << endl;
        cout << "5.Exit" << endl;
        cout << "Enter your choice:";
        cin >> choice;
        if (choice == "1")
        {
            cout << "Enter the book name";
            cin >> bookname;
        }
        else if (choice == "2")
        {
            cout << "View book";
        }
        else if (choice == "3")
        {
            cout << "Borrow the book:";
        }
        else if (choice == "4")
        {
            cout << "You have issued book:";
        }
        else if (choice == "5")
        {
            cout << "Exit";
            break;
        }
    }
}