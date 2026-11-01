class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {

        for(long p = 0; p < nums.size(); p++){if(nums[p] < 0){nums[p] = -nums[p];}}
        sort(nums.begin(), nums.end());
        long long total(0);
        for(int p = 0; p < nums.size(); p++){total += (2 * p + 1 < nums.size() ? -1 : 1) * nums[p] * nums[p];}
        return total;
    }
};
