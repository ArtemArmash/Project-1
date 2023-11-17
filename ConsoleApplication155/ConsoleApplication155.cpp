#include <iostream>
#include "SortArray.h"
using namespace std;

int main() {
    const int n = 5;
    int arr[n] = { 3, 1, 4, 5, 2 };
    cout << "Simple Array: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    SortArr(arr, n);
    cout << "New array: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
