class Solution {
public:
    int maximumDifference(vector<int>& nums) {      
        int mn(nums[0]), ans(-1);
        for(int p = 1; p < nums.size(); p++){
            int diff = nums[p] - mn;
            if(diff == 0){continue;}
            ans = (ans > diff ? ans : diff);
            mn = (mn < nums[p] ? mn : nums[p]);
        }
        
        return ans;
    }
};
