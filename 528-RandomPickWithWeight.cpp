class Solution {
public:
    Solution(vector<int>& w) {
        v = std::vector(w.size(), 0);
        int cs(w[0]);
        for(int p = 1; p < v.size(); p++){v[p] = cs; cs += w[p];}
        total = cs;
    }
    
    int pickIndex() {
        int r = rand() % total;
        int idx = std::distance(v.begin(), std::upper_bound(v.begin(), v.end(), r) ) - 1;
        return idx;
    }

    std::vector<int> v;
    int total{0};
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
