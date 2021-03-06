#pragma once
#include <string>
using namespace std;
class UserProfile {
public:
	enum class Grade {
		PRIMARY,
		MIDEUM,
		ADVANCED,
		PROFESSIONAL
	};
	UserProfile();
	UserProfile(string record, int loginCount, int guessCount, int correctCount, Grade grade = Grade::PRIMARY, string name = "guest");
	double correct_ratio() const { return (_guessCount != 0 ? (_correctCount * 1.0 / _guessCount) : 0); }
	string name() const { return _name; }
	void name(const string& name) { _name = name; }
	void login_count(const int loginCount) { _loginCount = loginCount; }
	void guess_count(const int guessCount) { _guessCount = guessCount; }
	void correct_count(const int correctCount) { _correctCount = correctCount; }
	void showRecord(ostream& os) const;
	bool operator==(const UserProfile&) const;
	bool operator!=(const UserProfile&) const;
private:
	string _record;
	string _name;
	int _loginCount;
	int _guessCount;
	int _correctCount;
	Grade _grade;
};
istream& operator>>(istream& is, UserProfile& up);
ostream& operator<<(ostream& is, const UserProfile& up);
