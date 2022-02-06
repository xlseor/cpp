#include <iostream>

#include <string>

using namespace std;

int main () {
    string usernameEntry; 
    string passwordEntry;

    string username1 = "Tom";
    string username2 = "Jerry";
    string username3 = "Gru";

    string password1 = "Caledonia";
    string password2 = "Morrowind95";
    string password3 = "fangorn102";

    int userNameAttemptCount = 0;

    cout << "Please enter your username: \n";
    cin >> usernameEntry;
    cout << "Please enter your password: \n";
    cin >>  passwordEntry;

    if (usernameEntry != username1 && (usernameEntry != username2 && usernameEntry != username3)) {
      cout << "Invalid username.";
      
    
