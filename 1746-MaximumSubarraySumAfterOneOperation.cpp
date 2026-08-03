class Solution {
public:
    int maxSumAfterOperation(vector<int>& nums) {

        int sofarA(nums[0]), sofarB(nums[0] * nums[0]), mxs(nums[0] * nums[0]);
        for(int p = 1; p < nums.size(); p++){
            sofarB = std::max(nums[p] * nums[p], std::max(sofarA + nums[p] * nums[p], sofarB + nums[p]));
            sofarA = std::max(nums[p], sofarA + nums[p]);
            mxs = std::max(mxs, sofarB);
        }

        return mxs;
    }
};
