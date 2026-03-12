class Solution {
public:
    int minimizeSum(vector<int>& nums) {

        const int n = nums.size();
        sort(nums.begin(), nums.end());
        int a = nums[n - 3] - nums[0];
        int b = nums.back() - nums[2];
        int c = nums[n - 2] - nums[1];
        return std::min(a, std::min(b, c));
    }
};
