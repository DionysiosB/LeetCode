class Solution {
public:
    int longestSubsequence(vector<int>& nums) {

        bool nz(false); int x(0);
        for(int num : nums){
            nz |= num;
            x ^= num;
        }

        return nz ? (nums.size() - !x) : 0;
    }
};
