class Solution {
public:
    int minOperations(vector<int>& nums) {

        int cnt(0);
        for(int p = 0; p < nums.size(); p++){
            if(nums[p]){continue;}
            if(p + 2 >= nums.size()){return -1;}
            nums[p + 1] = 1 - nums[p + 1]; 
            nums[p + 2] = 1 - nums[p + 2];
            ++cnt;
        }
        
        return cnt;
    }
};
