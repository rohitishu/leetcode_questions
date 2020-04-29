class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> s1;
    stack<int> s2;
    MinStack() {
       while(!s1.empty())
       {
           s1.pop();
       }
         while(!s2.empty())
       {
           s2.pop();
       }
    }
    
    void push(int x) {
        s1.push(x);
        if(s2.empty())
        {
            s2.push(x);
            
        }
        else
        {
            if(x<=s2.top())
            {
                s2.push(x);
            }
            else
            {
                s2.push(s2.top());
            }
        }
        
    }
    
    void pop() {
     if(s1.empty())
         return ;
        s1.pop();
        s2.pop();
        
    }
    
    int top() {
        if(s1.empty())
            return 0;
        return s1.top();
        
    }
    
    int getMin() {
        if(s2.empty())
            return 0;
        return s2.top();
        
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
