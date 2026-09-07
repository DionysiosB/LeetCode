class Solution {
public:
    int maxScore(vector<int>& nums) {

        int total(nums[0]), minsingle(nums[0]), minpair(1e9);
        for(int p = 1; p < nums.size(); p++){
            total += nums[p];
            minsingle = std::min(minsingle, nums[p]);
            minpair = std::min(minpair, nums[p - 1] + nums[p]);
        }

        return total - (nums.size() % 2 ? minsingle : minpair);
    }
};
