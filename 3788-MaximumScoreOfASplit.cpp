class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        
        const int n = nums.size();
        std::vector<long long> vmn(n); vmn[n - 1] = nums[n - 1];
        for(int p = n - 2; p >= 0; p--){vmn[p] = std::min((long long)nums[p], vmn[p + 1]);}
        long long cs(0), mxs(-1e15);
        for(int p = 0; p < n - 1; p++){
            cs += nums[p];
            mxs = std::max(mxs, cs - vmn[p + 1]);
        }

        return mxs;
    }
};
