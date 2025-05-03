class Solution {
public:
    bool checkPossibility(vector<int>& nums) {

        bool used(false);
        for(int p = 0; p + 1 < nums.size(); p++){
            if(nums[p] <= nums[p + 1]){continue;}
            if(used){return false;}
            if(!p || nums[p - 1] <= nums[p + 1]){nums[p] = nums[p + 1];}
            else{nums[p + 1] = nums[p];}
            used = true;
        }

        return true;
    }
};
