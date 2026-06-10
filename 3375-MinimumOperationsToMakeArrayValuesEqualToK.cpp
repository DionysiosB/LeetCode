class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        
        std::set<int> s;
        int mn(nums[0]);
        bool hk(false);
        for(int x: nums){
            if(x < k){return -1;}
            else if(x == k){hk = true;}
            mn = std::min(mn, x);
            s.insert(x);
        }

        return s.size() - hk;
    }
};
