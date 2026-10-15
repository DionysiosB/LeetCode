class Solution {
public:
    bool isTrionic(vector<int>& nums) {

        int state(0), a(-1), b(-1);
        for(long p = 1; p < nums.size(); p++){
            if(nums[p - 1] == nums[p]){return false;}
            if(state == 0 && nums[p - 1] > nums[p]){a = p - 1; state = 1;}
            else if(state == 1 && nums[p - 1] < nums[p]){b = p - 1; state = 2;}
            else if(state == 2 && nums[p - 1] > nums[p]){return false;}
        }

        return (0 < a && a < b && b + 1 < nums.size() && state == 2);
    }
};
