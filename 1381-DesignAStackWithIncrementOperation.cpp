class CustomStack {
public:
    CustomStack(int maxSize) {
        v = std::vector<int>();
        mxsz = maxSize;
    }
    
    void push(int x) {if(v.size() < mxsz){v.push_back(x);}}
    int pop() {
        if(v.empty()){return -1;}
        int x = v.back(); v.pop_back();
        return x;
    }
    
    void increment(int k, int val) {
        for(int p = 0; p < k && p < v.size(); p++){v[p] += val;}
    }
private:
    std::vector<int> v;
    int mxsz{0};
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
