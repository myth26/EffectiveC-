#include <iostream>
#include <string>
using namespace std;
int main(){
	//char* s = new char[20];
	//cout << "May I have your name?\n" ;
	//cin >> s; 
	//if(strlen(s) > 2){
	//	cout << "Hello " << s << "!" << endl;
	//}
	string str;
	cout << "Please enter your name.\n";
	cin >> str; 
	if(str.size() > 2){
		cout << "Hello " << str << "!" << endl;
	}
	return 0;
} 