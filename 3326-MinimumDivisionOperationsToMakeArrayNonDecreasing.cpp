class Solution {
public:
    int minOperations(vector<int>& nums) {

        int mxn(0);
        for(int num : nums){mxn = (mxn > num ? mxn : num);}
        
        std::vector<int> dv(mxn + 1, -1);
        for(int p = 2; p <= mxn; p++){
            for(int q = 2; q <= p && p * q <= mxn; q++){dv[p * q] = q;}
        }

        int cnt(0);
        for(int p = nums.size() - 2; p >= 0; p--){
            while(nums[p] > nums[p + 1]){
                if(dv[nums[p]] > 0){++cnt; nums[p] = dv[nums[p]];}
                else{return -1;}
            }
        }

        return cnt;
    }
};
