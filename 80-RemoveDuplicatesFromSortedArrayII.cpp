class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() < 3){return nums.size();}
        int idx(2);
        for(int p = 2; p < nums.size(); p++){
            if(nums[p] != nums[idx - 2]){nums[idx++] = nums[p];}
        }

        return idx;
    }
};
