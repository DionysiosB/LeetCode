class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        long start(0), prod(1), cnt(0);
        for(long p = 0; p < nums.size(); p++){
            prod *= nums[p];
            while(start < p && prod >= k){prod /= nums[start++];}
            cnt += (prod < k) * (p - start + 1);
        }

        return cnt;
    }
}
