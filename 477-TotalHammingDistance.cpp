class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        
        int n = nums.size();
        std::vector<int> v(32, 0);
        for(int p = 0; p < n; p++){
            for(int b = 0; b < 32; b++){v[b] += nums[p] % 2; nums[p] /= 2;}
        }
        
        int total(0);
        for(int p = 0; p < 32; p++){total += v[p] * (n - v[p]);}
        return total;
    }
};
