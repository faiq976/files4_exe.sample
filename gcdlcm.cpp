#include <iostream>
using namespace std;
int main()
{
    int num_1;
    cout << "Enter the first number:";
    cin >> num_1;
    int num_2;
    cout << "Enter the second number:";
    cin >> num_2;
    int a, b, temp, gcd, lcm;
    a = num_1, b = num_2;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
        gcd = a;
    }
    lcm = (num_1 * num_2) / gcd;
    cout << "GCD of" << num_1 << "and" << num_2 << "is:" << gcd << endl;
    cout << "LCM of" << num_1 << "and" << num_2 << "is:" << lcm << endl;
}