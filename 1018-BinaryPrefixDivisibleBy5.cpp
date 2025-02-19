class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        
        std::vector<bool> v(nums.size(), false);
        int cur(0);
        for(int p = 0; p < nums.size(); p++){cur = (2 * cur + nums[p]) % 5; v[p] = !cur;}
        return v;
    }
};
