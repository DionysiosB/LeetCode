class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int s(0);
        for(int p = 0; p < nums.size(); p += 2){s += nums[p];}
        return s;
    }
};
