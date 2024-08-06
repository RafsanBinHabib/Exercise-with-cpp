// write a program that read ASCII value and display equivalent character.

#include <iostream>

using namespace std;

int main()
{
    int ascii;

    cin >> ascii;

    cout << "Equivalent character is: " << char(ascii) << endl; // Expilicit type casting

    return 0;
}