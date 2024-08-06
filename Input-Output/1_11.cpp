// write a program that read any lower case character and display in upper case.

// #include <iostream>

// using namespace std;

// int main()
// {
//     char lower_case;

//     cin >> lower_case;

//     cout << "Upper case is: " << char(lower_case - 32) << endl;

//     return 0;
// }

//OR

#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char lower_case;

    cin >> lower_case;

    char upper_case = toupper(lower_case);

    cout << "Upper case is: " << upper_case << endl;

    return 0;
}