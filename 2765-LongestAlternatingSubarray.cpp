class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int mxlen(0), len(0), prev(0);
        for(long p = 1; p < nums.size(); p++){
            if(nums[p] == nums[p - 1] + 1){
                if(prev < 0){++len;}
                else{len = 2;}
                prev = 1;
            }
            else if(nums[p] == nums[p - 1] - 1){
                if(prev > 0){++len; prev = -1;}
                else{len = 1;}
            }
            else{prev = 0; len = 1;}
            mxlen = (mxlen > len ? mxlen : len);
        }

        if(mxlen == 1){mxlen = -1;}
        return mxlen;
    }
};
