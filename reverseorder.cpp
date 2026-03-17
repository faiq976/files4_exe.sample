#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter the number of rows";
    cin >> rows;
    for (int i = rows; i >= 1; i = i - 1)
    {
        for (int j = i; i >= 1; j = j - 1)
        {
            cout << j << "" << endl;
        }
    }