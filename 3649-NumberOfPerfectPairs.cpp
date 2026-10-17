class Solution {
public:
    long long perfectPairs(vector<int>& nums) {

        for(int &num : nums){if(num < 0){num = -num;}}
        sort(nums.begin(), nums.end());

        long idx(0); long long total(0);
        for(long p = 0; p < nums.size(); p++){
            while(idx < nums.size() && nums[idx] <= 2 * nums[p]){++idx;}
            total += (idx - p - 1);
        }

        return total;
    }
};
