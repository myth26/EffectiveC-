#include <iostream>
using namespace std;
template <typename T>
T max(T& t1, T& t2){return t1 > t2 ? t1 : t2;}
int main(){
    int ai = 1, bi = 2;
    double ad = 1.0, bd = 0.99;
    string as = "asd", bs = "asc";
    cout << max(ai, bi) << endl;
    cout << max(ad, bd) << endl;
    cout << max(as, bs) << endl;
	return 0;
} 