class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        bool f(false);
        for(int p = 0; p < nums.size(); p++){
            if(nums[p] % 2){continue;}
            else if(f){return true;}
            else{f = true;}
        }
        
        return false;
    }
};
