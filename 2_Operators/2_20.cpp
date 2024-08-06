// write a program that read a number and mod by 8 using bitwise AND operator.

#include <iostream>

using namespace std;

int main()
{
    int x;

    cin >> x;

    int res = x & 7;

    cout << "Mod: " << res << endl;

    return 0;
}