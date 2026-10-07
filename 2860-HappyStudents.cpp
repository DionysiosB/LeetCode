class Solution {
public:
    int countWays(vector<int>& nums) {
        
        const int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans( (nums[0] > 0) + (n > nums.back()) ) ;
        for(int p = 0; p + 1 < n; p++){
            const int selected = p + 1;
            ans += (selected > nums[p] && selected < nums[p + 1]);
        }

        return ans;
    }
};
