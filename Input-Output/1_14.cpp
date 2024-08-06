// write a program that read any decimal number and display equivalent hexadecimal number.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;

    cin >> n;

    cout << "Equivalent hexadecimal number: " << hex << n << endl;

    return 0;
}
