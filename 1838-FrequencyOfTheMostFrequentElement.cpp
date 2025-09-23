class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        long need(0), idx(0), res(0);
        for(long p = 0; p < nums.size(); p++){
            need += (nums[p] - (p > 0 ? nums[p - 1] : nums[0])) * (p - idx);
            while(need > k){need -= (nums[p] - nums[idx++]);}
            long cnt = p - idx + 1;
            res = (res > cnt ? res : cnt);
        }

        return (int)res;
    }
};
