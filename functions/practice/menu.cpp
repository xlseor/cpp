#include <iostream>
#include <string>

using namespace std;

void calculator();
// pocket calculator which uses 4 functions.

void ninety_nine();
// prints lyrics to 99 bottles of beer on the wall

void password();
// password checker


int main() {
  int userInput;
  cout << "Please enter a number to select a program from the menu. ";
  cout << "1. Pocket Calculator.";
  cout << "2. 99 Bottles of Beer on the Wall.";
  cout << "3. Password Checker.";
  cin >> userInput;
  bool validInputCondition = false;
  while (validInputCondition == false) {
    switch (userInput) {
      case 1:
        calculator();
        validInputCondition = true;
        break;
      case 2:
        ninety_nine();
        validInputCondition = true;
        break;
      case 3:
        password();
        validInputCondition = true;
        break;
      default:
        cout << "Please enter a valid input. ";
    }
  }
}

void add(double, double);
void subtract(double, double);
void multiply(double, double);
void divide(double, double);

  void calculator() {
    char oper;
    double num1;
    double num2;
    bool validInputCondition = false;
    while (validInputCondition == false) {
      cout << "Welcome to calculator. Please enter the operator, (+-/*), followed by two operands." << endl;
      cin >> oper;
      cin >> num1;
      cin >> num2;
      switch (oper) {
      case '+':
	add(num1, num2);
	validInputCondition = true;
	break;
      case '-':
	subtract(num1, num2);
	validInputCondition = true;
	break;
      case '/':
	divide(num1, num2);
	validInputCondition = true;
	break;
      case '*':
	multiply(num1, num2);
	validInputCondition = true;
	break;
      default:
	cout << "Please enter a valid operator." << endl;
    }
  }
}
// internal functions of calculator

  void add(double val1, double val2)
  {
    cout << " " << val1 << " + " << val2 << " = " << val1+val2 << endl;
   }

  void subtract(double val1, double val2)
  {
    cout << " " << val1 << " - " << val2 << " = " << val1-val2 << endl;
  }

  void multiply(double val1, double val2)
  {
    cout << " " << val1 << " * " << val2 << " = " << val1*val2 << endl;
  }

  void divide(double val1, double val2) {
    cout << " " << val1 << " / " << val2 << " = " << val1/val2 << endl;
  }

  void ninety_nine(){
    for(int i=1; i<100; i++){
      cout << 100-i << " bottles of beer on the wall, " << endl;
      cout << 100-i << " bottles of beer, " << endl;
      cout << "You take one down and pass it around, " << endl;
      cout << 100-i-1 << " bottles of beer on the wall. " << endl;
    }
  }

  // declaration of internal password checking function

  bool passwordChecker(string usernameInput, string passwordInput, string username, string password);

  void password(){
    string username = "Bobke";
    string password = "Marlinspike02";
    string usernameInput;
    string passwordInput;
    bool validInputCondition = false;
    int attempts = 0;
    while (validInputCondition == false && attempts < 4) {
      cout << "Please enter your username: " << endl;
      cin >> usernameInput;
      cout << "Please enter your password: " << endl;
      cin >> passwordInput;
      validInputCondition = passwordChecker(usernameInput, passwordInput, username, password);
      attempts++;
      if (validInputCondition == true) {
	cout << "Welcome! Loading your preferences... ";
      }
      else if (attempts < 4) {
	cout << "Invalid username or password. ";
	  }
      else {
	cout << "3 Incorrect attempts. System locked.";
      }
    }
  }
// internal password checking function

    bool passwordChecker(string usernameInput, string passwordInput, string username, string password) {
      if (usernameInput == username && passwordInput == password) {
	return true;
      }
      else {
	return false;
      }
    }

   
