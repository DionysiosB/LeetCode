class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        std::set<int> s;
        for(int p = 0; p < nums.size(); p++){s.insert(nums[p]);}
        while(s.count(original)){original *= 2;}
        return original;
    }
};
