class Solution {
public:
    bool canJump(std::vector<int>& nums) {

        std::vector<bool> b(nums.size(), false);
        b[0] = true;
        for(int p = 0; p < b.size(); p++){
            if(!b[p]){continue;}
            for(int q = 0; q <= nums[p]; q++){b[p + q] = true;}
        }

        return b.back();
    }
};
