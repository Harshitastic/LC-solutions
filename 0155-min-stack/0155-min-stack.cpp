class MinStack {
public:
    stack<pair<long long,long long>>st;
    
    MinStack() {
        
    }
    
    void push(long long value) {
        if(st.empty()){
            st.push({value,value});
            return;
        }
        long long mini=min(getMin(),value);
        st.push({value,mini});
        
    }
    
    void pop() {
        st.pop();
        
    }
    
    long long top() {
        return st.top().first;
        
    }
    
    long long getMin() {
        return st.top().second;

        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */