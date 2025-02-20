class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int cnt(0), prev(0);
        for(int p = 0; p < nums.size(); p++){
            prev += (nums[p] < target);
            cnt += (nums[p] == target);
        }
        
        std::vector<int> v;
        for(int p = 0; p < cnt; p++){v.push_back(prev + p);}
        return v;
    }
};
