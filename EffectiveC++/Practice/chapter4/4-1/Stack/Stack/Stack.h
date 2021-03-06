#pragma once
#include <string>
#include <vector>
using namespace std;
class Stack {
    public:
        bool empty() { return _stack.size() == 0; }
        bool full() { return _stack.max_size() == _stack.size(); }
        int size() { return _stack.size(); }
        bool push(const string&);
        bool pop(string& elem);
        bool peek(string& elem);
        bool find(const string&);
        int count(const string&);
    private:
        vector<string> _stack;
};