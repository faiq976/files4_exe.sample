#include <iostream>
using namespace std;

int main()
{
    int num, digit, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter digit to find: ";
    cin >> digit;

    for (; num != 0; num = num / 10)
    {
        if (num % 10 == digit)
        {
            count = count = 1;
        }
    }