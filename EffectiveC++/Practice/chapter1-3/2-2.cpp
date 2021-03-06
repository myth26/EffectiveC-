#include <iostream>
#include <vector>
using namespace std;

inline bool is_size_ok(int size){
    const int max_size = 1024;
    if(size <= 0 || size > max_size){
        cerr << "pent_seq(): oops: invalid size: "
             << size << "-- can't fulfill request.\n";
        return false;
    }
    return true;
}

bool pent_seq(int size, vector<int> &seq){
    if(!is_size_ok) return false;
    for(int i = 1; i <= size; i++){
        seq.push_back(i * (3 * i - 1) / 2);
    }
    return true;
}

const vector<int>* pent_seq(int size){
    if(!is_size_ok) return 0;
    static vector<int> seq;
    for(int i = seq.size(); i <= size; i++){
        seq.push_back(i * (3 * i - 1) / 2);
    }
    return &seq;
}

bool pent_elem(int pos, int &elem){
    const vector<int> *pseq = pent_seq(pos);
    if(!pseq){
        elem = 0; return false;
    }
    elem = pseq->at(pos);
    return true;
}

int main(){
    vector<int> sequence;
    if(pent_seq(-1,sequence)){
        for(int i = 0; i < sequence.size(); i++){
            cout << sequence[i] << ((i + 1 % 5) ? ' ' : '\n');
        }
    }
    int elem = 0;
    if(pent_elem(3,elem)){
        cout << elem << endl;
    }
    
	return 0;
} 