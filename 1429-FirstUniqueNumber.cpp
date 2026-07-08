class FirstUnique {
public:
    FirstUnique(vector<int>& nums) {
        
        m = std::map<int, int>();
        v = std::vector<int>();
        idx = 0;

        for(int p = 0; p < nums.size(); p++){
            if(m.count(nums[p])){v[m[nums[p]]] = -1;}
            else{m[nums[p]] = v.size(); v.push_back(nums[p]);}
        }
    }
    
    int showFirstUnique() {
        while(idx < v.size() && v[idx] < 0){++idx;}
        return (idx < v.size() ? v[idx] : -1);
    }
    
    void add(int value) {
        if(m.count(value)){v[m[value]] = -1;}
        else{m[value] = v.size(); v.push_back(value);}
    }

private:
    std::vector<int> v;
    std::map<int, int> m;
    size_t idx{0};
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */
