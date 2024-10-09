class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int cnt(0);
        for(int a = 0; a < n; a++){
            std::set<int> s;
            for(int b = a; b < n; b++){s.insert(nums[b]); cnt += s.size() * s.size();}
        }

        return cnt;
    }
};
