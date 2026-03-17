#include <iostream>
using namespace std;
int main()
{
    int total_percentages = 5;
    for (int i = 1; i <= 5;)
    {
        double percent = (i * 100.0) / total_percentages;
        cout << "Task" << i << ":" << percent << "%done" << endl;
    }
}