// write a program that read a number and multiply by two using shift operator.

#include <iostream>

using namespace std;

int main()
{
    int x;

    cin >> x;

    int res = x << 2;

    cout << "Result: " << res << endl;

    return 0;
}