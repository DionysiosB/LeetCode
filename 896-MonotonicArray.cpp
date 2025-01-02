class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool up(true), down(true);
        for(int p = 1; p < nums.size(); p++){
            if(nums[p - 1] < nums[p]){up = false;}
            if(nums[p - 1] > nums[p]){down = false;}
        }

        return up || down;
    }
};
