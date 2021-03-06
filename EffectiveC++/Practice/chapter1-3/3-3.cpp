#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    map<string, vector<string>> family;
    vector<string> zhang = {"z1","z2","z3", "z4"};
    vector<string> li = {"l1","l2","l3", "l4"};
    vector<string> wang = {"w1","w2","w3", "w4" ,"w5"};
    vector<string> zhao = {"zh1","zh2","zh3", "zh4", "zh5", "zh6"};
    family["zhang"] = zhang; 
    family["li"] = li; 
    family["wang"] = wang; 
    family["zhao"] = zhao; 
    cout << "Please enter last name of family.\n";
    string last_Name;
    cin >> last_Name;
    vector<string> names = family[last_Name];
    for(string name : names){
        cout << name << ' ';
    }
    cout << endl;
	return 0;
}   