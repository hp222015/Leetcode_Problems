class MinStack {
public:
    stack<int> s;
    stack<int> t;
    MinStack() {
    
    }
    
    void push(int val) {
        s.push(val);
        if(t.empty() || val<=t.top())
            t.push(val);
    }
    
    void pop() {
        if(!s.empty() and !t.empty() and s.top()==t.top())
            t.pop();
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        
        return t.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */