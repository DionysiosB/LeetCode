class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        return dfs(nums, 0, target);
    }

private:
    int dfs(std::vector<int> &nums, int start, int target){
        if(start >= nums.size()){return !target;}
        return dfs(nums, start + 1, -nums[start] + target) + dfs(nums, start + 1, nums[start] + target);
    }
};
