class Solution {
public:
    int maxScore(vector<int>& nums) {
        
        int cnt(0); long long cs(0);
        sort(nums.rbegin(), nums.rend());
        for(int p = 0; p < nums.size(); p++){
            cs += nums[p];
            if(cs > 0){++cnt;}
            else{return cnt;}
        }

        return cnt;
    }
};
