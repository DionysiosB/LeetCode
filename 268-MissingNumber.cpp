class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long total(0);
        for(size_t p = 0; p < nums.size(); p++){total += nums[p];}
        long long missing = nums.size() * (nums.size() + 1) / 2 - total;
        return missing;
    }
};
