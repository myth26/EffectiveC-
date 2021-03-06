#include <iostream>
#include <vector>
#include <string>
using namespace std;
int max(int m, int n){return m > n ? m : n;}
double max(double m, double n){return m > n ? m : n;}
string max(string m, string n){return m > n ? m : n;}
const vector<int> max(vector<int>& m, vector<int>& n){return m.size() > n.size() ? m : n;}
int main(){
    int ai = 1, bi = 2;
    double ad = 1.0, bd = 0.99;
    string as = "asd", bs = "asc";
    vector<int> mv, nv;
    mv.push_back(2);
    nv.push_back(0);
    nv.push_back(1);
    cout << max(ai, bi) << endl;
    cout << max(ad, bd) << endl;
    cout << max(as, bs) << endl;
    const vector<int> max_vec = max(mv,nv);
    for(int i = 0; i < max_vec.size(); i++){
        cout << max_vec[i] << ' ';
    }
    cout << endl;
	return 0;
} 