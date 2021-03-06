class Solution {
public:
    std::vector<std::vector<int> > permuteUnique(vector<int>& nums) {
        
        std::vector<std::vector<int> > perm;
        sort(nums.begin(), nums.end());
        do{perm.push_back(nums);} while(next_permutation(nums.begin(), nums.end()));
        return perm;
    }
};
