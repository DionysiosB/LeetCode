class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int target = nums[nums.size() / 2];
        int total(0);
        for(int p = 0; p < nums.size(); p++){
            total += (nums[p] < target) ? (target - nums[p]) : (nums[p] - target);
        }
        
        return total;
    }
};
