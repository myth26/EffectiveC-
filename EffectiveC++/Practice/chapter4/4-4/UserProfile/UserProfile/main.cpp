#include "UserProfile.h"
#include <iostream>
using namespace std;
int main() {
	UserProfile up, up2;
	cin >> up;
	cout << up;
	cin >> up2;
	(up == up2) ? cout << "true" : cout << "false";
	cout << endl;
	return 0;
}