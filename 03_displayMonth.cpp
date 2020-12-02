#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int m;

    cout << "Please enter month number" << endl;
    cin >> m;
    if (m == 1)
    {
        cout << "Jan" << endl;
    }
    else if (m == 2)
    {
        cout << "Feb" << endl;
    }
    else if (m == 3)
    {
        cout << "March" << endl;
    }
    else if (m == 4)
    {
        cout << "Apr" << endl;
    }
    else if (m == 5)
    {
        cout << "May" << endl;
    }
    else if (m == 6)
    {
        cout << "June" << endl;
    }
    else if (m == 7)
    {
        cout << "July" << endl;
    }
    else if (m == 8)
    {
        cout << "Aug" << endl;
    }
    else if (m == 9)
    {
        cout << "Sept" << endl;
    }
    else if (m == 10)
    {
        cout << "Oct" << endl;
    }
    else if (m == 11)
    {
        cout << "Nov" << endl;
    }
    else if (m == 12)
    {
        cout << "Dec" << endl;
    }
    else
    {
        cout << "invalid Month" << endl;
    }
}