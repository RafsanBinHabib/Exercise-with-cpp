// write a program that read any character and display ASCII value.

#include <iostream>

using namespace std;

int main()
{
    char ch;

    cin >> ch;

    cout << "Value is: " << int(ch) << endl; // Expilicit type casting

    return 0;
}

//OR 

// int main()
// {
//     char ch;

//     cin >> ch;

//     int ascii = ch; //Implicit type casting

//     cout << "Value is: " << ascii << endl;

//     return 0;
// }