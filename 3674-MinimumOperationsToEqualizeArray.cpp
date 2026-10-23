class Solution {
public:
    int minOperations(vector<int>& nums) {
        for(int p = 1; p < nums.size(); p++){if(nums[p] != nums[0]){return 1;}}
        return 0;
    }
};
