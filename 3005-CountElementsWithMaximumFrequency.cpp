class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        std::map<int, int> cnt;
        int total(0), mxcnt(0);
        for(int p = 0; p < nums.size(); p++){
            ++cnt[nums[p]];
            if(cnt[nums[p]] == mxcnt){total += mxcnt;}
            else if(cnt[nums[p]] > mxcnt){mxcnt = cnt[nums[p]]; total = mxcnt;}
        }

        return total;
    }
};
