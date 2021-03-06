#include "Stack.h"
#include <iostream>
using namespace std;
int main() {
	Stack s;
	if (s.empty()) {
		s.push("hello");
		s.push("hello");
		s.push("world");
	}
	string top;
	if (s.peek(top)) {
		cout << top << endl;
	}
	s.pop(top);
	if (s.peek(top)) {
		cout << top << endl;
	}
	cout << s.size() << endl << s.full() << endl;
	if (s.find("hello")) {
		cout << "find hello in stack s.\n";
	}
	cout << s.count("hello") << endl;
	return 0;
}