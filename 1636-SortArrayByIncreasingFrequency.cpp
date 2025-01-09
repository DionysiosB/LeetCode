bool cmp(std::pair<int, int> a, std::pair<int, int> b){
    return (a.first < b.first || (a.first == b.first && a.second > b.second));
}

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        std::map<int, int> f;
        for(int p = 0; p < nums.size(); p++){++f[nums[p]];}
        std::vector<std::pair<int, int> > v;
        for(std::map<int, int>::iterator it = f.begin(); it != f.end(); it++){
            int key = it->first;
            int val = it->second;
            v.push_back(std::make_pair(val, key));
        }

        sort(v.begin(), v.end(), cmp);
        std::vector<int> res;
        for(int p = 0; p < v.size(); p++){
            for(int u = 0; u < v[p].first; u++){res.push_back(v[p].second);}
        }
        return res;
    }
};
