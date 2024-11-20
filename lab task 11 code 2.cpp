#include <iostream>
using namespace std;

int main() {
    int n = 9;
    int a[n];

    // Taking array input from the user
    cout << "Enter 9 elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Unsorted Array:" << endl;
    for (int k = 0; k < n; k++) {
        cout << a[k] << " ";
    }
    cout << endl;

    cout << "Bubble Sort" << endl;

    // Bubble Sort with optimization
    int temp;
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;  // Flag to check if any swap was made

        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                // Swap if the element is greater than the next
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = true;  // Mark that a swap was made
            }
        }

        // If no swaps were made in this pass, array is sorted
        if (!swapped) {
            break;
        }

        // Display the array after each pass
        cout << "Array after pass " << i + 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << a[k] << " ";
        }
        cout << endl;
    }

    cout << "Sorted Array in Ascending Order:" << endl;
    for (int k = 0; k < n; k++) {
        cout << a[k] << " ";
    }
    cout << endl;

    return 0;
}

