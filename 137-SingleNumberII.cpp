class Solution {
public:
    int singleNumber(vector<int>& nums) {
        const int B = 32;
        std::vector<int> count(B, 0);
        int res(0);
        for(int b = 0; b < B; b++){
            for(int p = 0; p < nums.size(); p++){
                if((nums[p] >> b) & 1){++count[b];}
            }
            
            res |= ((count[b] % 3) << b);
        }
        
        return res;
    }
};
