class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int total(0); for(int x : nums){total += x - nums[0];}
        return total;
    }
};
