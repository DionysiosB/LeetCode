class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        
        std::map<int, int> cnt;
        int res(-1), mxcnt(0);
        for(int p = 0; p < nums.size(); p++){
            if(nums[p] % 2){continue;}
            ++cnt[nums[p]];
            if(cnt[nums[p]] > mxcnt){res = nums[p]; mxcnt = cnt[nums[p]];}
            else if(cnt[nums[p]] == mxcnt && nums[p] < res){res = nums[p]; mxcnt = cnt[nums[p]];}
        }
        
        return res;
    }
};
