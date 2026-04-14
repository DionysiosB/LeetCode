class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        
        std::set<int> s;
        for(int p = 0; p < nums.size(); p++){s.insert(nums[p]);}
        std::map<int, int> mpos;
        int rank(0);
        for(std::set<int>::iterator it = s.begin(); it != s.end(); it++){
            int x = *it;
            mpos[x] = rank++;
        }
        
        int cnt(0);
        for(int p = 0; p < nums.size(); p++){cnt += mpos[nums[p]];}
        return cnt;
    }
};
