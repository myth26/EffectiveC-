#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <set>
using namespace std;
int main(){
    ifstream inFile("E:\\VsCode\\data\\change.txt");
    string word;
    map<string, int> m;
    set<string> st = {"a","an","or","the","and","but"};
    while(inFile >> word){
        if(st.find(word) == st.end()){
            m[word]++;
        }
    }
    // for(auto pair : m){
    //     cout << pair.first << '\t' << pair.second << endl;
    // }
    cout << "Please enter the word to query\n";
    string query;
    cin >> query;
    if(m[query] > 0){
        cout << query << '\t' << m[query];
    }
	return 0;
} 