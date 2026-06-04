class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {

        int mxc(1), cnt(1);
        for(int p = 1; p < nums.size(); p++){
            if(nums[p - 1] < nums[p]){++cnt;}
            else{cnt = 1;}
            mxc = (mxc > cnt ? mxc : cnt);
        }
        return mxc;
        
    }
};
