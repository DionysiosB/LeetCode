class Solution {
public:
    long long evenProduct(vector<int>& nums) {

        long long total(0);
        long long last(-1);
        for(long p = 0; p < nums.size(); p++){
            last = (nums[p] % 2 ? last : p);
            total += (last + 1);
        }

        return total;
    }
};
