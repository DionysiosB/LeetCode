class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int mxlen(-1), idx(0);
        bool z(0);
        for(int p = 0; p < nums.size(); p++){
            if(!nums[p]){
                while(z && nums[idx]){++idx;}
                idx += z; z = true;
            }

            int len = p - idx + 1;
            mxlen = std::max(len, mxlen);
        }

        return mxlen;
    }
};
