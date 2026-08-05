class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        bool possible = std::next_permutation(nums.begin(), nums.end());
        if(!possible){sort(nums.begin(), nums.end());}
    }
};
