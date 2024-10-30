class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int cs(0), idx(0), len(0);
        for(int p = 0; p < nums.size(); p++){
            cs += nums[p];
            while(idx <= p && cs >= target){
                int plen = p - idx + 1;
                if(!len){len = plen;}
                else{len = (len < plen ? len : plen);}
                cs -= nums[idx]; ++idx;
            }
        }

        return len;
    }
};
