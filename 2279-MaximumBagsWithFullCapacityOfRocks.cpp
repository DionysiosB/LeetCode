class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        
        const int n = rocks.size();
        std::vector<int> v(n);
        for(int p = 0; p < n; p++){v[p] = capacity[p] - rocks[p];}
        sort(v.begin(), v.end());
        int cnt(0);
        for(int p = 0; p < n; p++){
            if(v[p] <= additionalRocks){++cnt; additionalRocks -= v[p];}
            else{break;}
        }
        
        return cnt;
    }
};
