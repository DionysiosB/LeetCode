class MyHashSet {
public:
    MyHashSet() {v = std::vector<bool>(1e6 + 7, 0);}
    void add(int key) {v[key] = 1;}
    void remove(int key) {v[key] = 0;}
    bool contains(int key) {return v[key];}
    std::vector<bool> v;
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
