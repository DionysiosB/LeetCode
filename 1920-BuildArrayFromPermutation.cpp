class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        const int n = nums.size();
        std::vector<int> ans(n);
        for(int p = 0; p < n; p++){ans[p] = nums[nums[p]];}
        return ans;
    }
};
