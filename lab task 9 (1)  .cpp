#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

int main() {
    int arr[9];
    
    cout << "Enter 9 elements of the array: ";
    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr, 9);

    cout << "Sorted array in ascending order: ";
    for (int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

