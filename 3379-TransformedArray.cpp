class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {

        // const size_t n = nums.size();   //WRONG!!!!
        const int n = nums.size();   //Without setting n to int, the modulo operation fails!!!!!
        std::vector<int> res(n, 0);
        for(int p = 0; p < n; p++){
            int idx = (n + (p + nums[p]) % n) % n;
            res[p] = nums[idx];
        }

        return res;
        
    }
};
