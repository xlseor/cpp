#include <iostream>
#include <string>

using namespace std;

int main () {
    char oper;
    double num1;
    double num2;
    double result;

    cout << "Welcome to calculator : \n";
    cout << "Enter an operator : +-/* \n";
    cin >> oper;
    cout << "Enter the first value : ";
    cin >> num1;
    cout << "Enter the second value : ";
    cin >> num2;


    if (oper == '/'){
      result = num1 / num2;
     }
     else if (oper == '+'){
       result = num1 + num2;
     }
     else if (oper == '-'){
       result = num1 - num2;
     }
     else {
       result = num1 * num2;
     }

    cout << num1 << oper << num2 << " = " << result;

    }
