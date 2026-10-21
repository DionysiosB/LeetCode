class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {

        std::vector<bool> v(n + 1, 1);
        v[0] = v[1] = 0;
        for(int p = 2; p * p <= v.size(); p++){
            if(!v[p]){continue;}
            for(int q = 2 * p; q < v.size(); q += p){v[q] = 0;}
        }

        std::set<int> s;
        for(int p = 2; p < v.size(); p++){if(v[p]){s.insert(p);}}

        std::vector<std::vector<int> > w;
        for(std::set<int>::iterator it = s.begin(); it != s.end(); it++){
            int x = *it;
            if(2 * x > n){break;}
            if(s.count(n - x)){w.push_back(std::vector<int>{x, n - x});}
        }

        return w;
    }
};
