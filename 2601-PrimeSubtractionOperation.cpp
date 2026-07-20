class Solution {
public:
    bool primeSubOperation(vector<int>& nums) {


        //Get all primes;
        std::vector<bool> w(1017, 1);
        w[0] = w[1] = 0;
        for(int p = 0; p * p < w.size(); p++){
            if(!w[p]){continue;}
            for(int q = 2 * p; q < w.size(); q += p){w[q] = 0;}
        }

        std::vector<int> primes;
        for(int p = 0; p < w.size(); p++){if(w[p]){primes.push_back(p);}}

        for(int p = 0; p < nums.size(); p++){
            int target = 1 + (p ? nums[p - 1] : 0);
            if(target > nums[p]){return false;}
            int cur = nums[p];
            for(int u = 0; u < primes.size(); u++){
                if(primes[u] >= nums[p] || target + primes[u] > nums[p]){break;}
                cur = nums[p] - primes[u];
            }
            nums[p] = cur;
        }

        return true;
    }
};
