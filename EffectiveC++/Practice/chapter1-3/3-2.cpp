#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
bool bigger_than(string s1, string s2){
    return s1.size() < s2.size() ? true : false;
}
int main(){
    ifstream inFile("E:\\VsCode\\data\\change.txt");
    string word;
    vector<string> text;
    while(inFile >> word){
        text.emplace_back(word);
    }
    sort(text.begin(),text.end(), bigger_than);
    int i = 1;
    for(string str : text){
        cout << str << ((i++ % 5 != 0) ? ' ' : '\n');
    }
	return 0;
} 