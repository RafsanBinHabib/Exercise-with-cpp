// write a program that read and display a line of text

#include <iostream>

using namespace std;

#define MAX_LINE_LEN 100

int main()
{
    char line[MAX_LINE_LEN];

    cin.getline(line, 30);

    cout << "Your Line is: " << line << endl;

    return 0;
}