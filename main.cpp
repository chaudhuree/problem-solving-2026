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
    while (numberofTestCases--)
    {
        int firstInteger, secondInteger, sum = 0;
        cin >> firstInteger >> secondInteger;
        if (firstInteger > secondInteger)
        {
            swap(firstInteger, secondInteger);
        }
        for (int i = firstInteger + 1; i < secondInteger; i++)
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
