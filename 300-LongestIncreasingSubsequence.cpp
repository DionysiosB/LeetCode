class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        std::vector<int> v(1, nums[0]);
        for(int p = 1; p < nums.size(); p++){
            if(v.back() < nums[p]){v.push_back(nums[p]);}
            else{
                int idx = std::lower_bound(v.begin(), v.end(), nums[p]) - v.begin();
                v[idx] = nums[p];
            }
        }

        return v.size();
    }
};
