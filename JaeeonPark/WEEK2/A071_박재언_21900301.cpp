using namespace std;

#include <stack>

class MyQueue {
private:
    stack<int> in_stack, out_stack;

    void Reverse(){
        while(!in_stack.empty()){
            out_stack.push(in_stack.top());
            in_stack.pop();
        }
    }

public:
    MyQueue() {
        
    }
    
    void push(int x) {
        in_stack.push(x);
    }
    
    int pop() {
        if(out_stack.empty())
            Reverse();
        int poppedItem = out_stack.top();
        out_stack.pop();
        return poppedItem;
    }
    
    int peek() {
        if(out_stack.empty())
            Reverse();
        int poppedItem = out_stack.top();
        return poppedItem;
    }
    
    bool empty() {
        return in_stack.empty() && out_stack.empty();
    }
};