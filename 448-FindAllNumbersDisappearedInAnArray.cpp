class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        std::vector<bool> s(nums.size() + 1, 1);
        for(int p = 0; p < nums.size(); p++){s[nums[p]] = 0;}
        std::vector<int> a;
        for(int p = 1; p < s.size(); p++){if(s[p]){a.push_back(p);}}
        return a;
    }
};
