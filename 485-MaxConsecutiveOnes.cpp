class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int max(0), count(0);
        for(int p = 0; p < nums.size(); p++){
            if(nums[p] == 1){++count;}
            else{count = 0;}
            max = (max > count) ? max : count;
        }
        
        return max;
    }
};
