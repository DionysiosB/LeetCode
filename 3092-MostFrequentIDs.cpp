class Solution {
public:
    vector<long long> mostFrequentIDs(vector<int>& nums, vector<int>& freq) {    
        std::map<long long, long long> m;
        std::set<std::pair<long long, long long>, std::greater<std::pair<long long, long long> > > s;
        
        std::vector<long long> res(nums.size());
        for(long long p = 0; p < nums.size(); p++){
            s.erase(std::make_pair(m[nums[p]], nums[p]));
            m[nums[p]] += freq[p];
            s.insert(std::make_pair(m[nums[p]], nums[p]));
            res[p] = (*s.begin()).first;
        }
        
        return res;
    }
};
