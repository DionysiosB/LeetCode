class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        
        long maxSoFar(nums[0]), ans(nums[0]);
        for(int p = 1; p < nums.size(); p++){
            maxSoFar = (maxSoFar < 0) ? nums[p] : (maxSoFar + nums[p]);
            if(ans < maxSoFar){ans = maxSoFar;}
        }
        
        return ans;
    }
};
