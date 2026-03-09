/*
 * Author: Shahriar Kabir Sohan
 * github: chaudhuree
 */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[5] = {1, 3, 5, 4, 9};
    int n =5;
    int revArr[5];
    for(int i = 0; i < n; i++)
    {
        revArr[i] = arr[n - 1 - i];
    }
 
    for(int i = 0; i < n; i++)
    {
        cout << revArr[i] << " ";
    }
    return 0;
}
