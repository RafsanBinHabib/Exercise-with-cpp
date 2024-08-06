// write a program that read any heaxdecimal number and display equivalent decimal number.

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string hex;

    cin >> hex;

    int decimal = stoi(hex, NULL, 16);

    cout << "Equivalent decimal number: " << decimal << endl;

    return 0;
}
