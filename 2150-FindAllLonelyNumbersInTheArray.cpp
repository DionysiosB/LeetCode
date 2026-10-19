class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        std::vector<int> v;
        for(int p = 0; p < nums.size(); p++){
            if(p && nums[p - 1] >= nums[p] - 1){continue;}
            if(p + 1 < nums.size() && nums[p + 1] <= nums[p] + 1){continue;}
            v.push_back(nums[p]);
        }

        return v;
    }
};
