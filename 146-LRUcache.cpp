class LRUCache {
public:
    LRUCache(int capacity) {
        d  = std::unordered_map<int, int>();
        kt = std::unordered_map<int, int>();
        tk = std::map<int, int>();

        cap = capacity;
        cnt = 0;
    }
    
    int get(int key) {
        ++cnt;
        if(d.count(key)){
            int x = kt[key];
            kt[key] = cnt;
            tk.erase(x);
            tk[cnt] = key;
            return d[key];
        }
        else{return -1;}
    }
    
    void put(int key, int value) {
        ++cnt;
        if(!d.count(key)){
            if(d.size() >= cap){
                int lt = tk.begin()->first;
                int xk = tk.begin()->second;
                tk.erase(tk.begin());
                d.erase(xk); kt.erase(xk); d.erase(xk);
            }
            d[key] = value;
            kt[key] = cnt;
            tk[cnt] = key;
        }
        else{
            d[key] = value;
            int prev = kt[key];
            tk.erase(prev);
            kt[key] = cnt; tk[cnt] = key;
        }

    }

    std::unordered_map<int, int> d, kt;
    std::map<int, int> tk;
    int cap, cnt;
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
