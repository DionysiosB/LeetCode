class Solution {
public:
    int largestPrime(int n) {

        std::vector<bool> v(n + 1, 1);
        v[0] = v[1] = 0;
        for(int p = 2; p * p <= n; p++){
            if(!v[p]){continue;}
            for(int q = 2 * p; q <= n; q += p){v[q] = 0;}
        }

        std::vector<int> w; std::set<int> s;
        for(int p = 2; p <= n; p++){
            if(!v[p]){continue;}
            w.push_back(p); s.insert(p);
        }

        int cs(0), ans(0);
        for(int p = 0; p < w.size(); p++){
            cs += w[p];
            if(cs > w.back()){break;}
            if(s.count(cs)){ans = cs;}
        }

        return ans;
    }
};

