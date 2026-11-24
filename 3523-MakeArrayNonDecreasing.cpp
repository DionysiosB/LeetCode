class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        std::vector<int> v;
        for(int x : nums){if(v.empty() || v.back() <= x){v.push_back(x);}}
        return v.size();   
    }
};
