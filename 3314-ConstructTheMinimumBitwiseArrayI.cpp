class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        std::vector<int> ans;
        for (int x : nums) {
            if (x == 2) {ans.push_back(-1); continue;}
            for (int b = 1; b < 32; b++) {
                if (x >> b & 1 ^ 1) {ans.push_back(x ^ 1 << (b - 1));break;}
            }
        }
        
        return ans;
    }
};
