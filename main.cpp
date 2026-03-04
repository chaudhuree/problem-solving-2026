/*
 * Author: Shahriar Kabir Sohan
 * github: chaudhuree
 * Program: password fix
 * https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D
 */
#include <iostream>
using namespace std;

int main()
{
    int X;

    while (cin >> X)
    {
        if (X == 1999)
        {
            cout << "Correct";
            break;
        }

        cout << "Wrong" << endl;
    }

    return 0;
}