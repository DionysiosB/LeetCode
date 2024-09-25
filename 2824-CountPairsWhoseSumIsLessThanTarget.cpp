class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int idx(nums.size() - 1), cnt(0);
        for(int p = 0; p < nums.size(); p++){
            while(idx > p && nums[p] + nums[idx] >= target){--idx;}
            if(idx <= p){break;}
            cnt += idx - p;
        }

        return cnt;
    }
};
