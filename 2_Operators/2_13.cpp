// write a program that read two numbers and display bitwise AND, OR & XOR.

#include <iostream>

using namespace std;

int main()
{
    int x, y, AND, OR, XOR, NOT;

    cin >> x >> y;

    AND = x & y;

    OR = x | y;

    XOR = x ^ y;

    NOT = ~x;

    cout << "Bitwise AND: " << AND << endl;

    cout << "Bitwise OR: " << OR << endl;

    cout << "Bitwise XOR: " << XOR << endl;

    cout << "Bitwise NOT: " << NOT << endl;

    return 0;
}