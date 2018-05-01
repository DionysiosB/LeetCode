class Solution {
public:
    std::vector<int> productExceptSelf(vector<int>& nums) {
        
        if(nums.size() <= 1){return nums;}
        
        std::vector<int> left(nums.size(),1);
        std::vector<int> right(nums.size(), 1);
        
        for(int p = 1; p < nums.size(); p++){left[p] = left[p - 1] * nums[p - 1];}
        for(int p = nums.size() - 2; p >= 0; p--){right[p] = right[p + 1] * nums[p + 1];}
        
        std::vector<int> ans(nums.size(), 0);
        for(size_t p = 0; p < ans.size(); p++){ans[p] = left[p] * right[p];}
        return ans;
    }
};
