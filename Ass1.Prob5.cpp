

#include <iostream>
using namespace std;

void reverse(int a[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = a[i]; // store the value of a[i] in a temporary variable
        a[i] = a[n - i - 1]; // set the value of a[i] to a[n-i-1]
        a[n - i - 1] = temp; // set the value of a[n-i-1] to the temporary variable
    }
}

int main() {
    const int SIZE = 4; // size of the array
    int arr[SIZE] = { 1, 5, 3, 2 };
    cout << "Original array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    reverse(arr, SIZE);
    cout << "Reversed array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

