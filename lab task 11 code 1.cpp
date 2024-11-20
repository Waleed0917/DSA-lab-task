#include<iostream>
using namespace std;

int main() {
    int n = 5;
    int a[n];

    // Taking array input from the user
    cout << "Enter 5 elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Unsorted Array:" << endl;
    for (int k = 0; k < n; k++) {
        cout << a[k] << "\t";
    }
    cout << endl;

    cout << "Insertion Sort in Descending Order" << endl;

    // Insertion Sort in descending order
    for (int i = 1; i < n; i++) {
        int temp = a[i];
        int j = i - 1;
        
        // Change comparison to sort in descending order
        while (j >= 0 && a[j] < temp) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;

        // Display the array after each iteration
        cout << "Array after iteration " << i << ":" << endl;
        for (int k = 0; k < n; k++) {
            cout << a[k] << "\t";
        }
        cout << endl;
    }

    cout << "Sorted Array in Descending Order:" << endl;
    for (int k = 0; k < n; k++) {
        cout << a[k] << "\t";
    }

    return 0;
}

