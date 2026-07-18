class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {

        std::vector<uint64_t> tv(target + 1); tv[0] = 1;
        for(uint64_t p = 1; p <= target; p++){
            for(uint64_t q = 0; q < nums.size(); q++){
                tv[p] += (p >= nums[q] ? tv[p - nums[q]] : 0);
            }
        }

        int ans = tv.back();
        return ans;
    }
};
