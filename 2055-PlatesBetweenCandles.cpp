class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        long n = s.size();
        std::vector<long> left(n), right(n), cs(n);
        long idx(-1);
        for(long p = 0; p < s.size(); p++){
            cs[p] = (p ? cs[p - 1] : 0) + (s[p] == '*');
            if(s[p] == '|'){idx = p;}
            left[p] = idx;
        }
        idx = n + 1;
        for(long p = s.size() - 1; p >= 0; p--){
            if(s[p] == '|'){idx = p;}
            right[p] = idx;
        }

        std::vector<int> v(queries.size());
        for(long p = 0; p < queries.size(); p++){
            long first = right[queries[p][0]];
            long second = left[queries[p][1]];
            v[p] = (first < second ? (cs[second] - cs[first]) : 0);
        }

        return v;
    }
};
