class Solution {
public:
    long long countSubarrays(vector<int>& nums) {
        long long total(0);
        int prev(nums[0]), cnt(0);
        for(int num : nums){
            cnt = (num > prev ? cnt : 0) + 1;
            total += cnt;
            prev = num;
        }
        return total;
    }
};
