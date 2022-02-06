#include <iostream>

using namespace std;

int main () {
  int age1;
  int age2;
  cout << "Enter the first age: \n";
  cin >>  age1;
  cout << "Enter the second age: \n";
  cin >> age2;
  if (age1 > 100 && age2 > 100) {
    cout << "Wow, two centegenarians! \n";
  }
  if (age1 > age2) {
    cout << "The first of the two is older. \n";
  }
  else if (age2 > age1) {
    cout << "The second of the two is older. \n";
  }
  else {
    cout << "They are the same age. \n";
  }
}

