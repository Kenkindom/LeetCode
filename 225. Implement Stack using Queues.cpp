//C++ Code
//Title      Implement Stack using Queues
//Difficulty Easy

class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        s.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        for(int i = 1; i < s.size(); i++)
        {
            int temp = s.front();
            s.pop();
            s.push(temp);
        }
        int first = s.front();
        s.pop();
        return first;
    }
    
    /** Get the top element. */
    int top() {
        return s.back();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return s.size() == 0 ? true : false;
    }
private:
    queue<int> s;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
