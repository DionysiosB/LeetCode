class Solution {
public:
    int subsequenceCount(vector<int>& nums) {
        
        const int MOD = 1e9 + 7;
        int a(0), b(0);
        for(int num : nums){
            int m = (num % 2);
            a += m;
            b += (1 - m); 
        }

        if(!a){return 0;}

        int ans(1);
        for(int p = 1; p < a + b; p++){ans *= 2; ans %= MOD;}
        return ans;
    }
};
