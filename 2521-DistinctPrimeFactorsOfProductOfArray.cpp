class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {

        std::set<int> fs;
        for(int n : nums){
            for(int p = 2; p * p <= n; p++){
                if(n % p){continue;}
                fs.insert(p);
                while(n % p == 0){n /= p;}
            }
            if(n > 1){fs.insert(n);}
        }

        return fs.size();
    }
};
