class MinStack {
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if( mins.empty() || val <= mins.top()){
            mins.push(val);
        }
        values.push(val);
    }
    
    void pop() {
        if(values.top() == mins.top()){
            mins.pop();
        }         
        values.pop();
    }
    
    int top() {
        return values.top();
    }
    
    int getMin() {
        return mins.top();
    }
    
private:
    std::stack<int> values;
    std::stack<int> mins;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */