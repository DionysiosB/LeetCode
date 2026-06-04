class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {

        int acnt(1), dcnt(1), mxcnt(1);
        for(int p = 1; p < nums.size(); p++){
            if(nums[p - 1] < nums[p]){++acnt; dcnt = 1;}
            else if(nums[p - 1] > nums[p]){acnt = 1; ++dcnt;}
            else{acnt = dcnt = 1;}

            int cnt = (acnt > dcnt ? acnt : dcnt);
            mxcnt = (mxcnt > cnt ? mxcnt : cnt);
        }

        return mxcnt;
    }
};
