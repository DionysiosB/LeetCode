class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int total(0);
        for(size_t p = 0; p < nums.size(); p++){total += nums[p];}
        return (total % 2) ? 0 : (nums.size() - 1);
    }
};
