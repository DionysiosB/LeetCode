class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int mxd(0);
        for(int p = 1; p < nums.size(); p++){mxd = std::max(mxd, nums[p] - nums[p - 1]);}
        return mxd;
    }
};
