class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {

        const int B = 107;
        std::vector<bool> v(B, 1);
        v[0] = v[1] = 0;
        for(long p = 2; p * p <= B; p++){
            if(!v[p]){continue;}
            for(long q = 2 * p; q < B; q += p){v[q] = 0;}
        }

        std::vector<int> f(B, 0);
        for(int p = 0; p < nums.size(); p++){++f[nums[p]];}

        for(int p = 0; p < B; p++){
            if(v[f[p]]){return true;}
        }
        return false;
    }
};
