class Solution {
public:
    bool isConsecutive(vector<int>& nums) {
        
        int mn(nums[0]);
        for(int p = 1; p < nums.size(); p++){mn = (nums[p] < mn ? nums[p] : mn);}
        
        std::vector<bool> v(nums.size(), false);
        for(int p = 0; p < nums.size(); p++){
            if(nums[p] >= mn + nums.size()){return false;}
            else if(v[nums[p] - mn]){return false;}
            v[nums[p] - mn] = 1;
        }
        
        return true;
    }
};
