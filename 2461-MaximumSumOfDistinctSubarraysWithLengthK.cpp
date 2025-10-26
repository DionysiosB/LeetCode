class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        std::unordered_map<int64_t, int64_t> m;
        int64_t s(0), mxs(0), unique(0);
        for(int64_t p = 0; p < k; p++){
            ++m[nums[p]]; s += nums[p];
            unique += (m[nums[p]] == 1);
        }

        if(unique == k){mxs = s;}
        for(int64_t p = k; p < nums.size(); p++){
           int prev = nums[p - k];
           --m[prev]; s -= prev;
           if(m[prev] == 0){--unique;} 

           ++m[nums[p]]; s += nums[p]; unique += (m[nums[p]] == 1);
           if(unique >= k && s > mxs){mxs = s;}
        }

        return mxs;
    }
};
