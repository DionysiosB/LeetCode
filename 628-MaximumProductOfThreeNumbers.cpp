class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int tstA = nums[0] * nums[1] * nums.back();
        int tstB = nums[n - 1] * nums[n - 2] * nums[n - 3];
        return (tstA > tstB ? tstA : tstB);
        
    }
};
