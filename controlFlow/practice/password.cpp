#include <iostream>

using namespace std;

int main () {
  int entry;
  int password1 = 1234567;
  int password2 = 2345678;
  cout << "Please enter your password: \n";
  cin >> entry;
  if (entry == password1 || entry == password2){
    cout << "Welcome! Loading your preferences...";
  }
  else {
    cout << "Incorrect Password.";
  }
}
  
