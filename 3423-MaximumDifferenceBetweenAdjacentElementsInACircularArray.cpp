class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {

        int mxd = std::abs(nums.back() - nums[0]);
        for(int p = 1; p < nums.size(); p++){
            int diff = std::abs(nums[p] - nums[p - 1]);
            mxd = std::max(mxd, diff);
        }

        return mxd;
    }
};
