class Solution {
public:
    int minPairSum(vector<int>& nums) {   
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int mx(0);
        for(int p = 0; p < n - 1 - p; p++){
            int s = nums[p] + nums[n - 1 - p];
            mx = (mx > s ? mx : s);
        }
        
        return mx;
    }
};
