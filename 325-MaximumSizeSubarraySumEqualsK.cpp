class Solution {
public:
    int maxSubArrayLen(vector<int>& nums, int k) {
        std::map<long, long> f; f[0] = -1;
        long cs(0), mxlen(0);
        for(int p = 0; p < nums.size(); p++){
            cs += nums[p];
            if(f.count(cs - k)){
                long len = p - f[cs - k];
                mxlen = (mxlen > len ? mxlen : len);
            }
            if(!f.count(cs)){f[cs] = p;}
        }

        return mxlen;
        
    }
};
