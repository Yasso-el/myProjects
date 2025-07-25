// --------Password Strength Checker -----------
#include <iostream>
#include <string>
using namespace std;

int main() {
	string password;
	//start a loop untel the user enters a strong or medium password
	while (true) {
		cout << "Enter your password: ";
		getline(cin, password); //getline() for full lines

		//create 4 bool flags
		bool hasUpper = false;
		bool hasLower = false;
		bool hasDigit = false;
		bool hasSymbol = false;

		//loop through each character
		for (int i = 0; i < password.length(); i++) {
			char ch = password[i]; //this gets the character at position i and stores it in ch.
			if (isupper(ch)) hasUpper = true;
			else if (islower(ch)) hasLower = true;
			else if (isdigit(ch)) hasDigit = true;
			else hasSymbol = true;
		}
		//show password strength
		cout << "\nPassword Strength: ";

		if (password.length() < 8) {
			cout << " Weak (too short)\n";
			cout << " Try again with at least 8 characters. \n\n";
		}
		else if (hasUpper && hasLower && hasDigit && hasSymbol) {
			cout << " Strong (great variety)\n";
			break; //exit the loop if password is strong
		}
		else if ((hasUpper || hasLower) && hasDigit) {
			cout << " Medium (missing symbol or case)\n";
			break; //accept medium too
		}
		else {
			cout << " Weak (not enough variety)\n";
			cout << " Try again with a mix of uppercase, lowercase, numbers, and symbols.\n\n";
		}
	}
	return 0;

}
