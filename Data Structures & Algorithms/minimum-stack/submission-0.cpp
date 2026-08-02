class MinStack {
private:
    long min;
    stack<long> s;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()){
            s.push(0);
            min=val;
        }
        else{
            s.push(val-min);
            if(val<min) min=val;
        }
    }
    
    void pop() {
        if(s.empty()) return;
        long p=s.top();
        s.pop();
        if(p<0) min-=p;
    }
    
    int top() {
        return (s.top()>0)?(s.top()+min):(int)min;
    }
    
    int getMin() {
        return (int)min;
    }
};
