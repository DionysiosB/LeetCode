class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        std::set<int> s;
        int cnt(0);
        for(int p = 0; p < nums.size(); p++){
            if(s.count(nums[p])){++cnt; s.erase(nums[p]);}
            else{s.insert(nums[p]);}
        }

        std::vector<int> v; v.push_back(cnt); v.push_back(nums.size() - 2 * cnt);
        return v;
    }
};
