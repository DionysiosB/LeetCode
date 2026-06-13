class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        std::vector<int> f(65, 0);
        for(int x : candidates){
            for(int p = 0; p < f.size() && x > 0; p++){f[p] += (x % 2); x /= 2;}
        }
        int mxb(0);
        for(int p = 0; p < f.size(); p++){mxb = std::max(mxb, f[p]);}
        return mxb;
    }
};
