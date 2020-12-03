#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x = 1;
    switch (x)
    {
    case 1:
        cout << "One";
        break;

    case 2:
        cout << "Two";
        break;

    case 3:
        cout << "Three";
        break;

    case 4:
        cout << "Four";
        break;
    default:
        cout << "Invalid number";
    }
    cout << endl
         << endl;
    return 0;
}