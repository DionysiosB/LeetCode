class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int res(0);
        for(int p = 0; p < nums.size(); p++){
            for(int q = p + 1; q < nums.size(); q++){
                if(nums[q] > 2 * nums[p]){break;}
                int tst = (nums[p] ^ nums[q]);
                res = (res > tst ? res : tst);
            }
        }
        
        return res;
    }
};
