class KthLargest {
public:
    KthLargest(int k, vector<int>& nums) {
        ms = std::multiset<int>();
        sz = k;
        for(int p = 0; p < nums.size(); p++){ms.insert(nums[p]);}
        while(ms.size() > k){ms.erase(ms.begin());}
    }
    
    int add(int val) {
        ms.insert(val);
        while(ms.size() > sz){ms.erase(ms.begin());}
        return *ms.begin();
    }
    
    std::multiset<int> ms;
    int sz{0};
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
