class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        
        for(int p = 0; p < nums.size(); p++){nums[p] %= 2;}
        sort(nums.begin(), nums.end());
        return nums;
    }
};
