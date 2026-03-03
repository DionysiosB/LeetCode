class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int idx(0), cnt(0);
        for(int p = 1; p < nums.size(); p++){
            if(nums[idx] < nums[p]){++cnt; ++idx;}
        }

        return cnt;
    }
};
