#include <iostream>

using namespace std;

int main() {
  int ans1sum = 0;
  int ans2sum = 0;
  int ans3sum = 0;
  int entry;
  bool activePollCondition = true;
  while(activePollCondition == true){
    cout << "Polling ... please enter your choice of \"1\", \"2\", or \"3\".\n";
    cout << "Or enter \"0\" to quit. \n";
    cin >> entry;
    switch (entry) {
      case 1:
        ans1sum = ans1sum + 1;
	break;
      case 2:
        ans2sum = ans2sum + 1;
	break;
      case 3:
        ans3sum = ans3sum + 1;
	break;
      case 0:
        activePollCondition = false;
	break;
      default:
        cout << "Invalid Input. \n";
    }
  }
  cout << "Results : \n";
  
  cout << "1 : " << ans1sum << "\n";
  cout << "2 : " << ans2sum << "\n";
  cout << "3 : " << ans3sum << "\n";
    
}



  
  
  
  
