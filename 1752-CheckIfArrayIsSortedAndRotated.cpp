class Solution {
public:
    bool check(vector<int>& nums) {
        int idx(-1);
        for(int p = 1; p < nums.size(); p++){
            if(nums[p - 1] > nums[p]){
                if(idx < 0){idx = p;}
                else{return false;}
            }
        }
        
        if(idx < 0){return true;}
        return nums.back() <= nums[0];
    }
};
