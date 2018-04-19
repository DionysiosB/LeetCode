class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if(nums.size() == 0){return 0;}
        int index(0);
        for(int p = 1; p < nums.size(); p++){
            if(nums[p] != nums[index]){
                ++index;
                nums[index] = nums[p];
            }
        }

        return (index + 1);
    }
};
