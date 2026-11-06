class Solution {
public:
    vector<long long> distance(vector<int>& nums) {

        const long long n = nums.size();
        std::unordered_map<int, std::vector<long long> > m;
        for(long long p = 0; p < n; p++){m[nums[p]].push_back(p);}

        std::vector<long long> w(n);
        for(std::pair<long long, std::vector<long long> > x : m){
            std::vector<long long> v = x.second;
            sort(v.begin(), v.end());
            std::vector<long long> sr(v.size(), v.back());
            for(long long p = sr.size() - 2; p >= 0; p--){sr[p] = sr[p + 1] + v[p];}
            long long cs(0);
            for(long long p = 0; p < v.size(); p++){
                w[v[p]] = (p * v[p] - cs) + ( (p + 1 < sr.size() ? sr[p + 1] : 0) - (v.size() - 1 - p) * v[p]);
                cs += v[p];
            }
        }

        return w;
    }
};
