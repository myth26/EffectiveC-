#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ifstream inFile("E:\\VsCode\\data\\1-7.txt");
    vector<string> data;
    string word;
    while(inFile >> word){
        data.push_back(word);
    }
    sort(data.begin(), data.end());
    for(string s : data){
        cout << s << ' ';
    }
    cout << endl;
    ofstream outFile("E:\\VsCode\\data\\1-7output.txt");
    for(string s : data){
        outFile << s << ' ';
    }
	return 0;
} 