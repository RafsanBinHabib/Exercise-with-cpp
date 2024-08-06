// write a program that read a number and multiply by five using shift operator.

#include <iostream>

using namespace std;

int main()
{
    long long x;

    cin >> x;

    long long res = x << 5;

    cout << "Left Shift: " << res << endl;

    return 0;
}