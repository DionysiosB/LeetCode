class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int cntlen(0), mxlen(0), mxnum(0);
        for(size_t p = 0; p < nums.size(); p++){
            if(nums[p] > mxnum){
                mxnum = nums[p];
                cntlen = 1;
                mxlen = 1;
            }
            else if(nums[p] == mxnum){
                ++cntlen;
                mxlen = std::max(cntlen, mxlen);
            }
            else{cntlen = 0;}
        }

        return mxlen;
    }
};
