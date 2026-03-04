/*
 * Author: Shahriar Kabir Sohan
 * github: chaudhuree
 * Program: Sum of Odd Numbers Between Two Integers
 * https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S
 */
#include <iostream>
using namespace std;

int main()
{
    int numberofTestCases;
    cin >> numberofTestCases;
    for (int i = 0; i < numberofTestCases; i++)
    {
        int a, b;
        cin >> a >> b;

        int start = min(a, b);
        int end = max(a, b);
        int sum = 0;
        for (int i = start + 1; i < end; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
