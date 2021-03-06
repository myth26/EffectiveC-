#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
using namespace std;
int main(){
    istream_iterator<int> is(cin);
    istream_iterator<int> eof;
    vector<int> numbers;
    copy(is, eof, back_inserter(numbers));

    vector<int> odds, evens;
    for(int number : numbers){
        if(number % 2 == 0) evens.push_back(number);
        else odds.push_back(number);
    }
    ofstream outFile("..\\..\\..\\data\\odds_output.txt");
    ofstream outFile2("E:\\VsCode\\data\\evens_output.txt");
    ostream_iterator<int> os(outFile, " ");
    ostream_iterator<int> os2(outFile2, " ");
    copy(odds.begin(), odds.end(), os);
    copy(evens.begin(), evens.end(), os2);
	return 0;
} 