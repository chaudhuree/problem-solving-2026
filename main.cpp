/*
 * Author: Shahriar Kabir Sohan
 * github: chaudhuree
 */
#include <iostream>
using namespace std;

int main() {
    int length;
    cin >> length;
    int remove_count =0;
    char* arr = new char[length];
    for (int i = 0; i < length; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i<length; i++) {
        if(arr[i]== arr[i+1]){
            remove_count++;
        }
        
        
    }
    cout << remove_count;
    return 0;
}