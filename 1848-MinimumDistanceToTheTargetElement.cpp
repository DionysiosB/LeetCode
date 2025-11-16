class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        for(long p = 0; p < nums.size(); p++){
            long idx = start - p;
            if(idx >= 0 && nums[idx] == target){return p;}
            idx = start + p;
            if(idx < nums.size() && nums[idx] == target){return p;}
        }

        return -1;
    }
};
