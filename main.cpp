/*
 * Author: Shahriar Kabir Sohan
 * github: chaudhuree
 */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {1, 3, 5, 4, 9};
    int pos = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = pos; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    n--;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
