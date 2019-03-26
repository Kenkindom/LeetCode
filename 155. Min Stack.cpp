//C++ Code
//Title      Min Stack
//Difficulty Easy

class MinStack {
public:
    /** initialize your data structure here. */
    int topIndex;
    vector<int> stack;
    
    MinStack() {
        topIndex = 0;
    }
    
    void push(int x) {
        stack.push_back(x);
        topIndex++;
    }
    
    void pop() {
        stack.erase(stack.end()-1, stack.end());
        topIndex--;
    }
    
    int top() {
        return stack[topIndex-1];
    }
    
    int getMin() {
        int min = stack[0];
        for(int i = 1; i < stack.size(); i++)
            min = (min < stack[i]) ? min : stack[i];
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
