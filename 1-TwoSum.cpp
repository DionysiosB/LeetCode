class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        
        std::map<int, int> indices;
        std::vector<int> ans(2);
        for(int p = 0; p < nums.size(); p++){
            if(indices.count(target - nums[p]) > 0){
                ans[0] = indices[target - nums[p]];
                ans[1] = p;
                return ans;
            }
            indices[nums[p]] = p;
        }
        
        return ans;
    }
};
