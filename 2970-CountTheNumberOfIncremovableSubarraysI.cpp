class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) {
        int n = nums.size();
        int cnt(0);
        for(int left = 0; left < n; left++){
            for(int right = left; right < n; right++){
                bool inc(true); int prev = 0;
                for(int p = 0; inc && p < left; p++){if(nums[p] <= prev){inc = false;}; prev = nums[p];}
                for(int p = right + 1; inc && p < n; p++){if(nums[p] <= prev){inc = false;}; prev = nums[p];}
                cnt += inc;
            }
        }
        
        return cnt;
    }
};
