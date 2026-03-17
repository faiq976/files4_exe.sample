#include <iostream>
using namespace std;
int main()
{
    string username, studentname, password;
    string username = "";
    int student_age = 0;
    string coursename = "";
    int choice;
    for (int i = 1; i <= 3; i = i + 1)
    {
        cout << "Enter your Username";
        cin >> username;
        cout << "Enter the Password";
        cin >> password;
        if (username == "admin" && password == "1234")
        {
            cout << "Login successful!";
            break;
        }
        else
        {
            cout << "Wrong login" << endl;
        }
        if (i == 3 && !(username == "admin" && password == "1234"))
        {
            cout << "Too many attempts.Program ends.";
            return 0;
        }
        for (int i = 1; i <= 5; i = i + 1)
        {
            cout << endl
                 << "-----University Mnagement System--------" << endl;
            cout << "1.Add student";
            cout << "2.View student";
            cout << "3.Add course";
            cout << "Exit" << endl;
            cout << "Enter your choice";
            cin >> choice;
            if (choice == "1")
            {
                cout << "Enter Student Name:";
                cin >> studentname;
                cout << "Enter Student Age";
                cin >> student_age;
                cout << "Student added successfully";
            }
            if (choice == "2")
            {
                if (studentname != "")
                {
                    cout << "Student name" << studentname << endl;
                    cout << "Student Age" << student_age << endl;
                }
                else
                {
                    cout << "No Studfent record found" << endl;
                }
                if (choice == "3")
                {
                    cout << "Enter course name";
                    cin >> coursename;
                    cout << "Course added" << coursename << endl;
                }
                if (choice == "4")
                {
                    cout << "Exit program";
                    break;
                }
                else
                {
                    cout << "Invalid choice" << endl;
                }
            }
        }
    }