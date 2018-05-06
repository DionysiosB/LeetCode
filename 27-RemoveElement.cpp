class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        long index(0);
        for(int p = 0; p < nums.size(); p++){
            if(nums[p] == val){continue;}
            nums[index++] = nums[p];
        }
        
        return index;
    }
};
