class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int mna(100), mnb(100);
        for(int p = 1; p < nums.size(); p++){
            if(nums[p] <= mna){mnb = mna; mna = nums[p];}
            else if(nums[p] < mnb){mnb = nums[p];}
        }
        
        return mna + mnb + nums[0];
    }
};
