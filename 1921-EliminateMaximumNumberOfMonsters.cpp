class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        size_t n = dist.size();
        std::vector<double> t(n);
        for(size_t p = 0; p < n; p++){t[p] = 1.0 * dist[p] / speed[p];}
        sort(t.begin(), t.end());
        for(size_t p = 0; p < n; p++){
            if(t[p] <= p){return p;}
        }

        return n;
    }
};
