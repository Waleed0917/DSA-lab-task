#include <iostream>
using namespace std;
int main() {
 int n;

 cout << "Enter size of the arrays: ";
 cin >> n;

 int arr1 = new int[n];
 int arr2 = new int[n];
 int arr3 = new int[n];
 int result = new int[n];

 cout << "Enter elements of first array: ";
 for (int i = 0; i < n; i++) {
 cin >> arr1[i];
 }

 cout << "Enter elements of second array: ";
 for (int i = 0; i < n; i++) {
 cin >> arr2[i];
 }
 // Input elements for arr3
 cout << "Enter elements of third array: ";
 for (int i = 0; i < n; i++) {
 cin >> arr3[i];
 }
 for (int i = 0; i < n; i++) {
 result[i] = arr1[i] + arr2[i] + arr3[i];
 }

 cout << "Resulting array: ";
 for (int i = 0; i < n; i++) {
 cout << result[i] << " ";
 }
 cout << endl;


 return 0;
}
