class Solution {
public:
    long long maximumProduct(vector<int>& nums, int m) {
        
        std::vector<long long> mnv(nums.size()), mxv(nums.size());
        long long res((long long) nums[0] * nums.back());
        for(long p = 0; p < nums.size(); p++){
            mnv[p] = p ? (mnv[p - 1] < nums[p] ? mnv[p - 1] : nums[p]) : nums[p];
            mxv[p] = p ? (mxv[p - 1] > nums[p] ? mxv[p - 1] : nums[p]) : nums[p];
            if(p < m - 1){continue;}
            long long tst = nums[p] * mnv[p - m + 1];
            res = (res > tst ? res : tst);
            tst = nums[p] * mxv[p - m + 1];
            res = (res > tst ? res : tst);
        }

        return res;
    }
};
