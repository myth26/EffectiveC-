#include "Stack.h"
bool Stack::push(const string& elem) {
    if (full()) return false;
    _stack.push_back(elem);
    return true;
}
bool Stack::pop(string& elem) {
    if (empty()) return false;
    elem = _stack.back();
    _stack.pop_back();
    return true;
}
bool Stack::peek(string& elem) {
    if (empty()) return false;
    elem = _stack.back();
    return true;
}
bool Stack::find(const string& elem) {
    for (string str : _stack) {
        if (str == elem) {
            return true;
        }
    }
    return false;
}
int Stack::count(const string& elem) {
    int count = 0;
    for (string str : _stack) {
        if (str == elem) {
            count++;
        }
    }
    return count;
}
