class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        long long cs(0), diff(0), mxd(-2e18);
        bool exist(false);
        std::map<long long, long long> m;

        for(int p = 0; p < nums.size(); p++){
            cs += nums[p];
            if(m.count(nums[p] - k)){
                long long diff = cs - m[nums[p] - k] + (nums[p] - k);
                mxd = (mxd > diff ? mxd : diff);
                exist = true;
            }
            if(m.count(nums[p] + k)){
                long long diff = cs - m[nums[p] + k] + (nums[p] + k);
                mxd = (mxd > diff ? mxd : diff);
                exist = true;
            }

            m[nums[p]] = std::min(m.count(nums[p]) ? m[nums[p]] : std::numeric_limits<long long>::max(), cs);
        }

        return exist ? mxd : 0LL;
    }
};
