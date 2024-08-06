// write a program that read temperature in Celcius and display in Fahrenhite.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double celcius, fahrenhite;

    cin >> celcius;

    fahrenhite = (1.8 * celcius) + 32;

    cout << "Fahrenhite: " << fixed << setprecision(2) << fahrenhite << " degree" << endl;

    return 0;
}