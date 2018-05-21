class Solution {
public:
    std::string frequencySort(std::string s) {
        
        const int N = 256;
        std::vector<std::pair<long, int> > v(N);
        for(int p = 0; p < N; p++){v[p] = std::make_pair(0, p);}
        for(long p = 0; p < s.size(); p++){++v[s[p]].first;}
        std::sort(v.begin(), v.end());
        long ind(0);
        for(int p = N - 1; p >= 0; p--){while((v[p].first)--){s[ind++] = (char)v[p].second;}}
        return s;
    }
};
