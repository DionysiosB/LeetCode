class MyQueue {
public:
    MyQueue() {sa = std::stack<int>(), sb = std::stack<int>();}
    void push(int x){sa.push(x);}
    int pop() {
        move();
        int x = sb.top();
        sb.pop();
        return x;
    }
    
    int peek() {
        move();
        return sb.top();
    }
    
    bool empty() {return (sa.empty() && sb.empty());}

    void move(){
        if(sb.empty()){
            while(!sa.empty()){
                int x = sa.top();
                sa.pop();
                sb.push(x);
            }
        }
    }

private:
    std::stack<int> sa, sb;

};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
