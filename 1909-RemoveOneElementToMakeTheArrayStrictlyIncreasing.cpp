class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        bool rem(false);
        for(int p = 1; p < nums.size(); p++){
            if(nums[p - 1] >= nums[p]){
                if(rem){return false;}
                rem = true;
                if(p > 1 && nums[p - 2] >= nums[p]){nums[p] = nums[p - 1];}
            }
        }

        return true;
    }
};
