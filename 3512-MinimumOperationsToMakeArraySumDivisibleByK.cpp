class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
    
        int total(0);
        for(int x : nums){total += x;}
        return total % k;
    }
};
