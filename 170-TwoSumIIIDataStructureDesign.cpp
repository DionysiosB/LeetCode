class TwoSum {
public:
    TwoSum() {m = std::map<long, long>();}
    void add(int number){++m[number];}
    bool find(int value) {
        for(std::map<long, long>::iterator it = m.begin(); it != m.end(); it++){
            long key = it->first;
            long cnt = it->second;
            if(2 * key == value){return cnt >= 2;}
            else if(m.count(value - key)){return true;}
        }
        return false;
    }

    std::map<long, long> m;
};

/**
 * Your TwoSum object will be instantiated and called as such:
 * TwoSum* obj = new TwoSum();
 * obj->add(number);
 * bool param_2 = obj->find(value);
 */
