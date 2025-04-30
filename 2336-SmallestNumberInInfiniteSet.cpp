class SmallestInfiniteSet {
public:
    SmallestInfiniteSet() {
        s = std::set<int>();
        n = 1;
    }
    int popSmallest() {
        if(s.empty()){return n++;}
        else{int b = *s.begin(); s.erase(s.begin()); return b;}
    }
    void addBack(int num) {
        if(num < n){s.insert(num);}
    }
    
    std::set<int> s;
    int n;
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
