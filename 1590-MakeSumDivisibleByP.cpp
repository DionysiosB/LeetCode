class Solution {
public:
    int minSubarray(vector<int>& nums, int div) {
        long m(0);
        for(long p = 0; p < nums.size(); p++){nums[p] %= div; m += nums[p]; m %= div;}
        if(!m){return 0;}

        std::map<long, long> f;
        long mns(-1), cur(0); f[0] = -1;
        for(long p = 0; p < nums.size(); p++){
            if(nums[p] == m){return 1;}
            cur += nums[p]; cur %= div;
            long target = (div + cur - m) % div;
            if(f.count(target)){
                long prev = f[target];
                long dist = p - prev;
                if(mns < 0 || dist < mns){mns = dist;}
            }
            f[cur] = p;
        }

        if(mns == nums.size()){return -1;}
        return mns;
    }
};
