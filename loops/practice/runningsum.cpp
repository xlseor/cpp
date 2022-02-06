#include <iostream>

using namespace std;

int main () {
  double runsum = 0;
  bool endCondition = false;
  while(endCondition == false){
    int entry;
    cout << "Please enter a number to add, or 0 to exit: \n";
    cin >> entry;
    runsum = runsum + entry;
    if(entry == 0) {
      endCondition = true;
    }
  }
  cout << "Final running sum: " << runsum;
}
