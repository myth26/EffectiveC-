#include <iostream>
using namespace std;
int main(){
	int n = 5;
	if(n >= 5) n++;
	int arr[n];
	arr[2] = 5;
	cout << arr[2] << sizeof(arr) / sizeof(int);
	return 0;
} 