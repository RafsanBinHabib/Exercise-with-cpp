// write a program that read radius of a circle and display area.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double radius, area;

    cin >> radius;

    area = 3.1416 * radius * radius;

    cout << "Area: " << area << endl;

    cout << "Area: " << fixed << setprecision(1) << area << " cm" << endl;

    return 0;
}