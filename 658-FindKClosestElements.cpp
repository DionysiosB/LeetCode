class Solution {
public:
    vector<int> findClosestElements(vector<int>& v, int k, int x) {
        int td(0); for(int p = 0; p < k; p++){td += std::abs(x - v[p]);}
        int idx(k - 1), mn(td);
        for(int p = k; p < v.size(); p++){
            int diffA = std::abs(x - v[p - k]);
            int diffB = std::abs(x - v[p]);
            td += diffB - diffA;
            if(td < mn){idx = p; mn = td;}
        }

        std::vector<int> res(k);
        for(int p = 0; p < k; p++){res[p] = v[idx - k + 1 + p];}
        return res;
    }
};
