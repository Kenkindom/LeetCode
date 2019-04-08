//C++ Code
//Title      Implement Queue using Stacks
//Difficulty Easy

class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        s.push_back(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int x = s[0];
        s.erase(s.begin(), s.begin()+1);
        return x;
    }
    
    /** Get the front element. */
    int peek() {
        return s[0];
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return s.size() == 0 ? true : false;
    }
private:
    vector<int> s;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
