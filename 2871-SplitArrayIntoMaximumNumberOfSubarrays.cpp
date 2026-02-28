class Solution {
public:
    int maxSubarrays(vector<int>& nums) {

        int cnt(0), cur(-1);
        for(int p = 0; p < nums.size(); p++){
            if(cur < 0){cur = nums[p];}
            else{cur = cur & nums[p];}
            if(!cur){++cnt; cur = -1;}
        }

        return (cnt > 0 ? cnt : 1);      
    }
};
