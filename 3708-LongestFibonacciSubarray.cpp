class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int cnt(2), mxlen(2);
        for(int p = 2; p < nums.size(); p++){
            if(nums[p - 2] + nums[p - 1] == nums[p]){++cnt; mxlen = (mxlen > cnt ? mxlen : cnt);}
            else{cnt = 2;}
        }

        return mxlen;
    }
};
