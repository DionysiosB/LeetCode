class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int mn(0);
        for(int p = 0; p < nums.size(); p++){
            nums[p] += (p > 0 ? nums[p - 1] : 0); 
            mn = (mn < nums[p] ? mn : nums[p]);
        }
        return 1 - mn;
    }
};
