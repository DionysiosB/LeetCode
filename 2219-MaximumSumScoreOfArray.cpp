class Solution {
public:
    long long maximumSumScore(vector<int>& nums) {
        const int n = nums.size();
        long long cs(0), w(nums[0]);
        for(int p = 0; p < n; p++){cs += nums[p]; w = std::max(w, cs);}
        cs = 0; for(int p = n - 1; p >= 0; p--){cs += nums[p]; w = std::max(w, cs);}
        return w;
    }
};
