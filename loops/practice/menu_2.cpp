#include <iostream>

using namespace std;

int main () {
  bool validInputCondition = false;
  int num1 = 1;
  int num2 = 2;
  int num3 = 3;
  int input;
  while (validInputCondition == false){
    cout << "Enter a number to choose an option from the menu: \n";
    cout << "1. -- Bacon\n";
    cout << "2. -- Eggs\n";
    cout << "3. -- Cheese\n";
    cin >> input;
    if(input <= 3 && input >=1){
      validInputCondition = true;
    }
    else{
      cout <<  "Please enter a valid input.\n";
    }
    cout << "You have chosen : " << input;
  }
}


  
