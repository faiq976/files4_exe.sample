#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "Enter a number";
    cin >> n;
    while (n != 0)
    {
        n = n / 10, count = count + 1;
    }
    cout << "Total number of digits are:" << count << endl;
}