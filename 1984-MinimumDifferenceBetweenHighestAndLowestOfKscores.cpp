class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int res(nums.back() - nums[0]);
        for(int p = k - 1; p < nums.size(); p++){
            int diff = nums[p] - nums[p - k + 1];
            res = (res < diff ? res : diff);
        }
        
        return res;
    }
};
