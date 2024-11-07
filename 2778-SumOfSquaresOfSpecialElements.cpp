class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int s(0);
        for(int p = 0; p < nums.size(); p++){
            if(nums.size() % (p + 1)){continue;}
            s += nums[p] * nums[p];
        }
        
        return s;
    }
};
