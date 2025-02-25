class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        int mx(0), idx(-1);
        for(int p = 0; p < nums.size(); p++){
            if(nums[p] > mx){
                if(nums[p] >= 2 * mx){idx = p;}
                else{idx = -1;}
                mx = nums[p];
            }
            else if(2 * nums[p] > mx){idx = -1;}
        }
        
        return idx;
    }
};
