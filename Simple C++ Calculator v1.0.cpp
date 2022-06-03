// The official calculator. //
#include <iostream>
using namespace std;

int first;
int second;
int sum;
int difference;
int product;
int quotient;

int main () {
  int reply = 0;
  int reply2 = 0;
  cout << "===========================\n";
  cout << "| Official Calculator v1.0|\n";
  cout << "===========================\n";
  cout << "\n";
  cout << "Choose one of these options: \n";
  cout << "\n";
  cout << "1 - Addition\n";
  cout << "2 - Subtraction\n";
  cout << "3 - Multiplication\n";
  cout << "4 - Division\n";
  cin >> reply;

  if (reply == 1) {
    cout << "Welcome to the Addition Calculator!\n";
    cout << "\n";
    cout << "Please enter a number to add: ";
    cin >> first;

    cout << "Please enter another number to add: ";
    cin >> second;
    sum = first + second;

    cout << first << " + " << second << " = " << sum;

      cout << "\n";
      cout << "\n";
      cout << "Press '5' to go back. Or press any key to quit: ";
      cin >> reply2;
      if (reply2 == 5) {
        main();
      } else {
        cout << "Quitting...";
      }
  } else if (reply == 2) {
    cout << "Welcome to the Subtraction Calculator!\n";
    cout << "\n";
    cout << "Please enter a number to subtract: ";
    cin >> first;

    cout << "Please enter another number to subtract: ";
    cin >> second;
    difference = first - second;

    cout << first << " - " << second << " = " <<       
    difference;

      cout << "\n";
      cout << "\n";
      cout << "Press '5' to go back. Or press any key to quit: ";
      cin >> reply2;
      if (reply2 == 5) {
        main();
      } else {
        cout << "Quitting...";
      }
    } else if (reply == 3) {
    cout << "Welcome to the Multiplication Calculator!\n";
    cout << "\n";
    cout << "Please enter a number to multiply: ";
    cin >> first;

    cout << "Please enter another number to multiply: ";
    cin >> second;
    product = first * second;

    cout << first << " x " << second << " = " <<       
    product;

      cout << "\n";
      cout << "\n";
      cout << "Press '5' to go back. Or press any key to quit: ";
      cin >> reply2;
      if (reply2 == 5) {
        main();
      } else {
        cout << "Quitting...";
      }
    } else if (reply == 4) {
    cout << "Welcome to the Division Calculator!\n";
    cout << "\n";
    cout << "Please enter a number to divide: ";
    cin >> first;

    cout << "Please enter another number to divide: ";
    cin >> second;
    quotient = first / second;

    cout << first << " / " << second << " = " <<       
    quotient;

    cout << "\n";
    cout << "\n";
    cout << "Press '5' to go back. Or press any key to quit: ";
    cin >> reply2;
      if (reply2 == 5) {
        main();
      } else {
        cout << "Quitting...";
      }
    }
  return 0;
}