/*
 * Author: Shahriar Kabir Sohan
 * github: chaudhuree
 * Program: W. Shape3
 * https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W
 */
#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    // printing upper half of the diamond
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // printing lower half of the diamond
    for (int i = N; i >= 1; i--)
    {
        for (int j = 1; j <= N - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}