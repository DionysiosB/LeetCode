class Solution {
public:
    vector<int> findArray(vector<int>& pref) {   
        std::vector<int> res(pref.size(), 0);
        for(int p = 0; p < pref.size(); p++){res[p] = pref[p] ^ (p > 0 ? pref[p - 1] : 0);}
        return res;
    }
};
