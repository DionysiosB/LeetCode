class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> s; int mxcnt(0);
        for(int p = 0; p < nums.size(); p++){s.insert(nums[p]);}
        for(int p = 0; p < nums.size(); p++){
            if(s.count(nums[p] - 1)){continue;}  //This is the key to making it linear, guarantees this is the start
            int cnt(0), x(nums[p]);
            while(s.count(x)){++x; ++cnt;}
            mxcnt = (mxcnt > cnt ? mxcnt : cnt);
        }

        return mxcnt;
    }
};
