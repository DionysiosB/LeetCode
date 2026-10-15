class Solution {
public:
    long long splitArray(vector<int>& nums) {
        
        std::vector<bool> isPrime(nums.size(), 1);
        isPrime[0] = isPrime[1] = 0;
        for(int p = 2; p * p < nums.size(); p++){
            if(!isPrime[p]){continue;}
            for(int q = 2 * p; q < nums.size(); q += p){isPrime[q] = 0;}
        }

        long long res(0);
        for(int p = 0; p < nums.size(); p++){res += nums[p] * (isPrime[p] ? 1 : -1);}
        return (res > 0 ? res : -res);
    }
};
