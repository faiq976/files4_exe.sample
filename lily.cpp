#include <iostream>
using namespace std;
int main()
{
    int age, machine_price, toy_price;
    cout << "Enter lily's age:";
    cin >> age;
    cout << "Enter the price of machine:";
    cin >> machine_price;
    cout << "Enter unit price of each toy:";
    cin >> toy_price;
    int present_money = 10, saving = 0, toy = 0;
    for (int i = 1; i <= age, i = i + 1;)
    {
        if (i % 2 == 0)
        {
            saving += (present_money - 1);
        }
        else
        {
            toy = toy + 1;
        }
        int toy_earn = toy_price * toy;
        int total_money = toy_earn + saving;
        if (total_money > machine_price)
        {
            cout << "YES!!!" << endl;
            int remaining = total_money - machine_price;
            cout << "" << remaining;
        }
        else
        {
            cout << "NO!!!" << endl;
            int insufficient = machine_price - total_money;
            cout << "" << insufficient << endl;
        }
    }
}