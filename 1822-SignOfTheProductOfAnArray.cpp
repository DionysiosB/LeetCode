class Solution {
public:
    int arraySign(vector<int>& nums) {
        bool neg(0);
        for(int p = 0; p < nums.size(); p++){
            if(!nums[p]){return 0;}
            else if(nums[p] < 0){neg = !neg;}
        }
        return 1 - 2 * neg;
    }
};
