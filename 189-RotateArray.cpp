class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
        
        int n = nums.size();
        k %= n;
        std::vector<int> buffer(k);
        for(int p = 0; p < k; p++){buffer[p] = nums[n - k + p];}
        for(int p = n - 1; p >= k; p--){nums[p] = nums[p - k];}
        for(int p = 0; p < k; p++){nums[p] = buffer[p];}
        return;
    }
};
