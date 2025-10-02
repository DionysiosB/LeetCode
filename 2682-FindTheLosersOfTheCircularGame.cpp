class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        std::vector<bool> v(n, 0);
        int cur(0);
        for(int p = 0; p < n; p++){
            if(v[cur]){break;}
            v[cur] = 1;
            cur += (p + 1) * k; cur %= n;
        }

        std::vector<int> w;
        for(int p = 0; p < n; p++){if(!v[p]){w.push_back(p + 1);}}
        return w;
    }
};
