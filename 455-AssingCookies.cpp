class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        long ind(0);
        for(long p = 0; p < s.size(); p++){
            if(s[p] >= g[ind]){++ind;}
            if(ind >= g.size()){break;}
        }
        return ind;
    }
};
