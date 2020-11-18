#include <iostream>
#include <string>
#include "ConsoleColor.h"


using namespace std;

int main() {
	cout << "Please enter the hostname to be checked:" << endl;
	string hostname;
	cin >> hostname;
	string pingHostname = "ping " + hostname + " -n 1";
	char* pingHostnameAsChar = &pingHostname[0];
	system("cls");
	cout << "Please wait...";
	int ping = system(pingHostnameAsChar);
	system("cls");
	if (ping == 0) {
		cout << green << "Host " << hostname << " is online!" << endl;
	} else {
		cout << red << "The specified host (" << hostname << ") is offline." << endl;
	}
}