class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int mx(0), div(1e9 + 7);
        
        for(int p = 0; p < divisors.size(); p++){
            int cur(0);
            for(int q = 0; q < nums.size(); q++){cur += !(nums[q] % divisors[p]);}
            if((cur > mx) || (cur == mx && divisors[p] < div)){mx = cur; div = divisors[p];}
        }
               
        return div;
    }
};
