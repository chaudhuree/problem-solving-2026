#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    // convert capital letters to small letters and vice versa
    char ch;
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
        cout << ch;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        cout << ch;
    }
    else
    {
        cout << "Invalid input!" << endl;
    }

    return 0;
}