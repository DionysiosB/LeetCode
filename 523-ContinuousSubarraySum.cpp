class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        std::set<int> s; s.insert(0);
        int t(0), prev(0);
        for(int p = 0; p < nums.size(); p++){
            t += nums[p]; t %= k;
            if(s.count(t) && t != prev){return true;}
            s.insert(t); prev = (prev != t ? t : -1);
        }
        
        return false;
    }
};
