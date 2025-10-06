class Solution {
public:
    bool isGood(vector<int>& nums) {
        if(nums.size() < 2){return false;}
        sort(nums.begin(), nums.end());
        for(int p = 0; p + 1 < nums.size(); p++){
            if(nums[p] != p + 1){return false;}
        }

        return (nums.back() == nums[nums.size() - 2]);
    }
};
