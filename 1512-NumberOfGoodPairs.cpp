class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        std::map<int, int> m;
        int cnt(0);
        for(int p = 0; p < nums.size(); p++){
            if(m.count(nums[p])){cnt += m[nums[p]];}
            ++m[nums[p]];
        }

        return cnt;
    }
}
