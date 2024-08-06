// write a program that read any octal number and display equivalent decimal number.

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string oct;

    cin >> oct;

    int decimal = stoi(oct, NULL, 8);

    cout << "Equivalent decimal number: " << decimal << endl;

    return 0;
}
