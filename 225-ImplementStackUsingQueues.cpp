class MyStack {
public:
    MyStack() {q = std::queue<int>();}
    void push(int x){q.push(x);}
    int pop() {
        int len = q.size();
        for(int p = 1; p < len; p++){q.push(q.front()); q.pop();}
        int val = q.front(); q.pop();
        return val;
    }
    
    int top(){
        int len = q.size();
        for(int p = 1; p < len; p++){q.push(q.front()); q.pop();}
        int val = q.front();
        q.pop(); q.push(val);
        return val;
    }
    bool empty() {return q.empty();}

private:
    std::queue<int> q;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
