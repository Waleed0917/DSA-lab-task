#include <iostream>
using namespace std;
int main() {
 int ages[10], largestAge = 0;

 cout << "Enter the ages of 10 students:\n";
 for (int i = 0; i < 10; i++) {
 cin >> ages[i];
 if (ages[i] > largestAge) {
 largestAge = ages[i];
 }
 }

 cout << "The largest age is: " << largestAge << endl;
 return 0;
}
