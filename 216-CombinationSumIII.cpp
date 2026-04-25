class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {

        std::vector<std::vector<int> > v;
        for(int p = 1; p < (1 << 9); p++){
            int u(p), sum(0); std::vector<int> cur;
            for(int d = 1; d <= 9; d++){
                if(u % 2){sum += d; cur.push_back(d);}
                u /= 2;
                if(!u || cur.size() > k || sum > n){break;}
            }
            if(cur.size() != k || sum != n){continue;}
            v.push_back(cur);
        }

        return v;
    }
};
