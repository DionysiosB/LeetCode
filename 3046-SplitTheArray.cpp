class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        
        std::vector<int> v(101, 0);
        for(int p = 0; p < nums.size(); p++){
            ++v[nums[p]];
            if(v[nums[p]] > 2){return false;}
        }
        
        return true;
    }
};
