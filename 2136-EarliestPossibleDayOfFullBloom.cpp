class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        
        const int n = growTime.size();
        std::vector<std::pair<int, int> > v(n);
        for(int p = 0; p < n; p++){v[p].first = growTime[p]; v[p].second = plantTime[p];}
        sort(v.rbegin(), v.rend());
        int cmx(0), csd(0);
        for(int p = 0; p < n; p++){
            csd += v[p].second;
            int cur = csd + v[p].first;
            cmx = (cmx > cur ? cmx : cur);
        }

        return cmx;
    }
};
