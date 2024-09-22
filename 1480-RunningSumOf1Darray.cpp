class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int p = 1; p < nums.size(); p++){nums[p] += nums[p - 1];}
        return nums;
    }
}
