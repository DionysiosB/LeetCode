class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        std::vector<int> csr(n, 0);
        for(int p = n - 1; p >= 0; p--){csr[p] = nums[p] + (p + 1 < n ? csr[p + 1] : 0);}
        
        int prev(0); std::vector<int> v(n);
        for(int p = 0; p < n; p++){
            v[p] = (p * nums[p] - prev) + ( (p + 1 < n ? csr[p + 1] : 0) - (n - 1 - p) * nums[p]);
            prev += nums[p];
        }

        return v;
    }
};
