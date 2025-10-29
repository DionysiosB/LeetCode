class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        std::vector<int>::iterator lb = std::lower_bound(nums.begin(), nums.end(), target);
        int start = (int)(lb - nums.begin());
        if(nums.empty() || lb == nums.end() || nums[start] != target){return std::vector<int>({-1, -1});}
        
        std::vector<int>::iterator ub = std::upper_bound(nums.begin(), nums.end(), target);
        int stop  = (int)(ub - nums.begin()) - 1;
        return std::vector<int>({(int)start, (int)stop});
    }
};
