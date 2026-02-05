class Solution {
public:
    int findLHS(vector<int>& nums) {
        std::map<long, long> m;
        for(long p = 0; p < nums.size(); p++){++m[nums[p]];}
        long mxl(0);
        for(std::map<long, long>::iterator it = m.begin(); it != m.end(); it++){
            long num = it->first;
            long val = it->second;
            if(!m.count(num + 1)){continue;}
            val += m[num + 1];
            mxl = (mxl > val ? mxl : val);
        }

        return mxl;
    }
};
