class RandomizedSet {
public:
    RandomizedSet() {
        v = std::vector<int>();
        mvp = std::unordered_map<int, int>();
    }
    
    bool insert(int val) {
        if(mvp.count(val)){return false;}
        v.push_back(val);
        mvp[val] = v.size() - 1;
        return true;
    }
    
    bool remove(int val) {
        if(!mvp.count(val)){return false;}
        int pos = mvp[val];
        v[pos] = v.back();
        mvp[v[pos]] = pos; 
        v.pop_back();
        mvp.erase(val);
        return true;
    }
    
    int getRandom() {return v[rand() % v.size()];}

    std::vector<int> v;
    std::unordered_map<int, int> mvp;
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
