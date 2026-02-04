class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int start(0), rem(k), mx(0);
        for(long p = 0; p < nums.size(); p++){
            if(!nums[p]){
                --rem;
                while(rem < 0){
                    if(!nums[start]){++rem;}
                    ++start;
                }
            }

            int cur = p - start + 1;
            mx = (mx > cur ? mx : cur);
        }

        return mx;
    }
};
