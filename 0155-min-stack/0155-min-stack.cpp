class MinStack {
public:
stack<int> stk;
stack<int>s;
// int mini=INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        // mini=min(mini,val);
        if(stk.empty() || val<=stk.top())
          stk.push(val);

    }
    
    void pop() {

        if(!s.empty())
        {
            if(s.top()==stk.top())
             stk.pop();
        }
        s.pop();
        // stk.pop();
        
    }
    
    int top() {
        return s.top();
        
    }
    
    int getMin() {
        return stk.top();
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