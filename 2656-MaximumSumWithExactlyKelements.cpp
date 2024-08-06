class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int mx(0);
        for(int p = 0; p < nums.size(); p++){mx = (mx > nums[p] ? mx : nums[p]);}
        int res = k * mx + k * (k - 1) / 2;
        return res;
    }
};
