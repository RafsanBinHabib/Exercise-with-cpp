// write a program that read any upper case character and display in lower case.

// #include <iostream>

// using namespace std;

// int main()
// {
//     char upper_case;

//     cin >> upper_case;

//     cout << "Lower case is: " << char(upper_case + 32) << endl;

//     return 0;
// }

//OR

#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char upper_case;

    cin >> upper_case;

    char lower_case = tolower(upper_case);

    cout << "Lower case is: " << lower_case << endl;

    return 0;
}