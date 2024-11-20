#include <iostream>
using namespace std;
void Menu();
int Addition(int a, int b);
int Subtraction(int a, int b);
int Multiplication(int a, int b);
int Division(int a, int b);
void Menu() {
 int choice, a, b;

 cout << "Select an operation:" << endl;
 cout << "1. Addition" << endl;
 cout << "2. Subtraction" << endl;
 cout << "3. Multiplication" << endl;
 cout << "4. Division" << endl;
 cout << "Enter your choice: ";
 cin >> choice;

 cout << "Enter two numbers: ";
 cin >> a >> b;

 switch (choice) {
 case 1:
 cout << "Result: " << Addition(a, b) << endl;
 break;
 case 2:
 cout << "Result: " << Subtraction(a, b) << endl;
 break;
 case 3:
 cout << "Result: " << Multiplication(a, b) << endl;
 break;
 case 4:
 cout << "Result: " << Division(a, b) << endl;
 break;
 default:
 cout << "Invalid choice!" << endl;
 }
}
int Addition(int a, int b) {
 return a + b;
}
int Subtraction(int a, int b) {
 return a - b;
}
int Multiplication(int a, int b) {
 return a * b;
}
int Division(int a, int b) {
 if (b != 0)
 return a / b;
 else {
 cout << "Error: Division by zero!" << endl;
 return 0;
 }
}
int main() {
 Menu();
 return 0;
}
