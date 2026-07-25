class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {

        int cnt(0);
        for(size_t p = 0; p < nums.size(); p++){
            cnt += nums[p] * (p >= k ? nums[p] > nums[p - k] : 1) * (p + k < nums.size() ? nums[p] > nums[p + k] : 1);
        }

        return cnt;
    }
};
