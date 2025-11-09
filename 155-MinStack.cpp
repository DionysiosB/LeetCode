class MinStack {
public:
    MinStack(){s = std::stack<std::pair<int, int> >();}
    void push(int val){s.push(std::make_pair(val, std::min(val, s.empty() ? val : s.top().second)));}
    void pop(){s.pop();}
    int top(){return s.top().first;}
    int getMin(){return s.top().second;}
    std::stack<std::pair<int, int>> s;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
