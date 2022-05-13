class MyQueue {
private:
    stack<int> s;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        helper(x);
    }
    void helper(int x){
        if(s.empty()){
            s.push(x);
            return;
        }
        int data = s.top();
        s.pop();
        helper(x);
        s.push(data);
        return;
    } 
    
    int pop() {
        int t = s.top();
        s.pop();
        return t;
    }
    
    int peek() {
        return s.top();
    }
    
    bool empty() {
        return s.empty();
    }
};