class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> m;
        for(int p = 0; p < nums.size();p++){++m[nums[p]];}
        std::set<std::pair<int, int> > s;
        for(std::unordered_map<int, int>::iterator it = m.begin(); it != m.end(); it++){
            int key = it->first;
            int val = it->second;
            s.insert(std::make_pair(val, key));
            if(s.size() > k){s.erase(s.begin());}
        }

        std::vector<int> v;
        for(std::set<std::pair<int, int>>::iterator it = s.begin(); it != s.end(); it++){v.push_back(it->second);}
        return v;
    }
};
