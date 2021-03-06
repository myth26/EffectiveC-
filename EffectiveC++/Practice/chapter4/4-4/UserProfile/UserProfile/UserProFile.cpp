#include "UserProfile.h"
#include <iostream>
using namespace std;
UserProfile::UserProfile() : _record(""), _loginCount(1), _guessCount(1), _correctCount(1), _grade(UserProfile::Grade::PRIMARY), _name("guest")
{
	
}
UserProfile::UserProfile(string record, int loginCount, int guessCount, int correctCount, UserProfile::Grade grade, string name)
	: _record(record), _loginCount(loginCount), _guessCount(guessCount), _correctCount(correctCount), _grade(grade),  _name(name)
{
}
void UserProfile::showRecord(ostream& os) const {
	os << "loginCount: " << _loginCount << endl
		<< "guessCount: " << _guessCount << endl
		<< "correctCount: " << _correctCount << endl
		<< "correctRatio: " << correct_ratio() << endl;
}
bool UserProfile::operator==(const UserProfile& up) const { return _name == up._name; }
bool UserProfile::operator!=(const UserProfile& up) const { return !(*this == up); }
ostream& operator<<(ostream& os, const UserProfile& up) {
	os << "name:" << up.name() << endl;
	up.showRecord(os);
	return os;
}
istream& operator>>(istream& is, UserProfile& up) {
	string record, name;
	int loginCount, guessCount, correctCount, grade;
	is >> record >> loginCount >> guessCount
		>> correctCount >> grade >> name;
	up.name(name);
	up.login_count(loginCount);
	up.guess_count(guessCount);
	up.correct_count(correctCount);
	return is;
}
