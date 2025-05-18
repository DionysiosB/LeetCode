class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        std::vector<bool> v(nums.size(), 0);
        for(int p = 0; p < nums.size(); p++){
            if(v[nums[p]]){return nums[p];}
            v[nums[p]] = 1;
        }

        return 0;
    }
};
