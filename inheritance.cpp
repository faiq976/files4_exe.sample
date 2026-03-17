#include <iostream>
using namespace std;
int main()
{
    int age = 19;
    int money;
    cout << "Enter the money:";
    cin >> money;
    int start_year = 1800;
    int end_year = 1800 + 100;
    for (int i = start_year; i < end_year; i = i + 1)
    {
        if ((i - start_year) % 2 == 0)
        {
            money -= 12000;
        }
        else
        {
            money -= 12000 + (50 * age);
        }
        if (money < 0)
        {
            cout << "No,he cannot spend whole life" << endl;
            return 0;
        }
        age = age + 1;
        cout << "He can spend life easily" << endl;
        return 0;
    }
