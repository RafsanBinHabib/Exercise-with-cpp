// write a program that read temperature in Fahrenhite and display in Celcius.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double celcius, fahrenhite;

    cin >> fahrenhite;

    celcius = ((fahrenhite - 32) / 9) * 5;

    cout << "Celcius: " << fixed << setprecision(2) << celcius << " degree" << endl;

    return 0;
}