class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int total(0);
        for(long p  = 0; p < nums.size(); p++){total += (p % 2 ? -1 : 1) * nums[p];}
        return total;
    }
};
