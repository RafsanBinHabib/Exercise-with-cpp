// write a program that read two intger and display sum, product, qoutent, substract and remainder.

#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cin >> x >> y;

    cout << "Sum: " << x + y << endl
         << "Subtract: " << x - y << endl
         << "Prouct: " << x * y << endl
         << "Qoutent: " << x / y << endl
         << "Remainder: " << x % y << endl;

    return 0;
}