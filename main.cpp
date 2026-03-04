/*
 * Author: Shahriar Kabir Sohan
 * github: chaudhuree
 * Program: factorial
 * https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G
 */
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, f = 1;
        cin >> n;

        for (int i = 1; i <= n; i++)
            f *= i;

        cout << f << endl;
    }
}