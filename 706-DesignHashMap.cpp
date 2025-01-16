class MyHashMap {
public:
    MyHashMap() {m = std::unordered_map<int, int>();}
    void put(int key, int value){m[key] = value;}
    int get(int key){return m.count(key) ? m[key] : -1;}
    void remove(int key){if(m.count(key)){m.erase(key);}}
    
    std::unordered_map<int, int> m;
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
