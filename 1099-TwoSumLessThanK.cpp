class Solution {
public:
    int twoSumLessThanK(vector<int>& nums, int k) {
        
        int res(-1);
        for(int p = 0; p < nums.size(); p++){
            for(int q = p + 1; q < nums.size(); q++){
                int tst = nums[p] + nums[q];
                if(tst >= k){continue;}
                if((res < 0) || (tst > res)){res = tst;}
            }
        }
        
        return res;
        
    }
};
