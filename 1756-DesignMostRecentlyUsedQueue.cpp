class MRUQueue {
public:
    MRUQueue(int n) {
        v = std::list<int>();
        for(long p = 0; p < n; p++){v.push_back(p + 1);}
    }
    
    int fetch(int k) {
        std::list<int>::iterator it = v.begin();
        std::advance(it, k - 1);
        int x = *it;
        v.erase(it); v.push_back(x);
        return x;
    }

    std::list<int> v;
};

/**
 * Your MRUQueue object will be instantiated and called as such:
 * MRUQueue* obj = new MRUQueue(n);
 * int param_1 = obj->fetch(k);
 */
