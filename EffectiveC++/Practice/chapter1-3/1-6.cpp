#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    const int ArraySize = 10;
    int arr[ArraySize];
    vector<int> vec;
    int n;
    cout << "Please enter ten numbers.\n";
    for(int i = 0; i < ArraySize; i++){
        cin >> n;
        arr[i] = n;
        vec.push_back(n);
    }
    int arraySum = 0, vectorSum = 0;
    for(int i = 0; i < ArraySize; i++){
        arraySum += arr[i];
        vectorSum += vec[i];
    }
    cout << "ArraySum = " << arraySum << ", Average = " << arraySum / ArraySize << endl;
    cout << "VectorSum = " << vectorSum << ", Average = " << vectorSum / vec.size() << endl;
	return 0;
} 