class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {       
        for(int p = 1; p < nums.size(); p++){
            if((nums[p - 1] + nums[p]) % 2 == 0){return false;}
        }

        return true;

    }
};
