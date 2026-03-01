class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());
        long long total(0);
   
        int idx = nums.size() / 2;
        total = std::abs(k - nums[idx]);
        for(int p = 0; p < idx; p++){total += (nums[p] > k ? (nums[p] - k) : 0);}
        for(int p = idx + 1; p < nums.size(); p++){total += (nums[p] < k ? (k - nums[p]) : 0);}
        return total;
    }
};
