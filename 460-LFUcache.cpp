class LFUCache {
public:
    LFUCache(int capacity) {
        cap = capacity;
        v = std::map<int, int>();
        kf = std::map<int, double>();
        fk = std::map<double, int>();
        step = 1.0 / (1 << 20);
        cv = step;
    }
    
    int get(int key) {
        if(!v.count(key)){return -1;}
        finc(key);
        return v[key];
    }
    
    void put(int key, int value) {
        if(v.count(key)){finc(key); v[key] = value; return;}
        
        if(v.size() >= cap){
            std::map<double, int>::iterator it = fk.begin();
            int torem = it->second;
            fk.erase(it); kf.erase(torem); v.erase(torem);
        }
        v[key] = value; 
        kf[key] = 1 + cv; fk[1 + cv] = key;
        cv += step;
    }

    void finc(int key){
        double prev = kf[key];
        kf.erase(key); fk.erase(prev);
        double nf = std::floor(prev) + 1 + cv;
        kf[key] = nf; fk[nf] = key;
        cv += step;
    }

    std::map<int, int> v;    
    std::map<int, double> kf;
    std::map<double, int> fk;
    double step{0}, cv{0};
    int cap;
};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
