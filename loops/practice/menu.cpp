// note: return to this program later
// note: there is an issue with arrays here. 

#include <iostream>

#include <string>

using namespace std;

int main(){
  string options[3] = {"option 1", "option 2", "option 3"};
  bool validSelectCondition = false;
  string selected = "";
  string userInput;
  while(validSelectCondition == false){
    cout << "Please select an option from the menu: \n";
    for(int i=0; i<sizeof(options); i++){
      cout << i << ". " << options[i] << "\n";
    }
    cin >> userInput;
    for(int j=0; j<sizeof(options); j++){
      if(userInput == options[j]){
	validSelectCondition = true;
      }
    }
    if(validSelectCondition == false){
      cout << "Invalid choice. \n";
    }
  }
  cout << "You have selected: " << userInput;
}



    
 
      
    
