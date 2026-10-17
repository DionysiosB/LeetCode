class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int ans(INT_MAX);
        for(int p = 0; p < nums.size(); p++){if(nums[p] != p){ans &= nums[p];}}
        return (ans < INT_MAX ? ans : 0);
    }
};
