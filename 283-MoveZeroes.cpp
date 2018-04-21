class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int index(0);
        for(int p = 0; p < nums.size(); p++){
            if(nums[p] == 0){continue;}
            nums[index] = nums[p];
            ++index;
        }

        for(int p = index; p < nums.size(); p++){nums[p] = 0;}
    }
};
