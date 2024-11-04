class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int mn(101), mx(-1);
        for(int p = 0; p < nums.size(); p++){
            mn = (mn < nums[p] ? mn : nums[p]);
            mx = (mx > nums[p] ? mx : nums[p]);
            if(mn < nums[p] && nums[p] < mx){return nums[p];}
        }
        
        for(int p = 0; p < nums.size(); p++){
            if(mn < nums[p] && nums[p] < mx){return nums[p];}
        }
        
        return -1;
    }
};
