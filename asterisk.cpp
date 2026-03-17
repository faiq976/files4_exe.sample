#include<iostream>
using namespace std;
int main()
{
int rows;
cout<<"Enter the number of rows";
cin>>rows;
for (int i = 1; i <= rows; i = i + 1)
    {
        for (int j = 1; j <= i; j = j + 1)
        {
            cout << "*";
        }
        cout << endl;
    }
}
