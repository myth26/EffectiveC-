#include <string>
#include <vector>
class Stack{
    public:
    bool empty(){return _stack.size() == 0}
    private:
        std::vector<std::string> _stack;
}