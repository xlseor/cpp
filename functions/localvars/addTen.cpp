#include <iostream>

using namespace std;


int getValueTen ()
{
  int result = 10;
  return result;
}

int addTen (int x)
{
  int result = x + getValueTen();
  return result;
}

int main () {
  cout << addTen(20) << endl;
}
