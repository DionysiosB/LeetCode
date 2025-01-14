class Solution {
public:
    vector<vector<int>> findMissingRanges(vector<int>& nums, int lower, int upper) {
        std::vector<std::vector<int> > v;
        if(nums.empty()){v.push_back(std::vector<int>{lower, upper}); return v;}
        if(lower < nums[0]){
            v.push_back(std::vector<int>{lower, nums[0] - 1});
        }

        for(int p = 1; p < nums.size(); p++){
            if(nums[p - 1] + 1 == nums[p]){continue;}
            v.push_back(std::vector<int>{nums[p - 1] + 1, nums[p] - 1});
        }

        if(nums.back() < upper){
            v.push_back(std::vector<int>{nums.back() + 1, upper});
        }
        
        return v;
    }
};
