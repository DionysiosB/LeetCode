class MapSum {
public:
    MapSum() {m = std::unordered_map<std::string, int>();}
    
    void insert(string key, int val) {m[key] = val;}
    int sum(string prefix) {
        int score(0);
        for(std::pair<std::string, int> x : m){
            std::string key = x.first;
            if(key.find(prefix) != 0){continue;}
            score += x.second;
        }

        return score;
    }

    std::unordered_map<std::string, int> m;

};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */
