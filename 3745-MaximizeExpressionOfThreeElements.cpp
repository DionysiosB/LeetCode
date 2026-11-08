class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {

        sort(nums.rbegin(), nums.rend());
        return nums[0] + nums[1] - nums.back();
        
    }
};
