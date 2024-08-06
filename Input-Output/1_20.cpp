// write a program that read any date in the format 'DD/MM/YYYY' or 'DD-MM-YYYY' or 'DD,MM,YYYY' or 'DD MM YYYY' and displays day, month and year separately.

#include <iostream>

using namespace std;

int main()
{
    int d, m, y;

    cin >> d;

    cin.ignore();

    cin >> m;

    cin.ignore();

    cin >> y;

    cout << "Day: " << d << endl
         << "Month: " << m << endl
         << "Year: " << y << endl;

    return 0;
}