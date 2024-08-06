// write a program that read any decimal number and display equivalent octal number.

#include <iostream>

using namespace std;

// int main()
// {
//     int n, octal = 0, tmp = 1, remainder;

//     cin >> n;

//     while (n > 0)
//     {
//         remainder = n % 8;

//         octal += remainder * tmp;

//         tmp *= 10;

//         n /= 8;
//     }

//     cout << "Equivalent octal number: " << octal << endl;

//     return 0;
// }

// OR

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;

    cin >> n;

    cout << "Equivalent octal number: " << oct << n << endl;

    return 0;
}
