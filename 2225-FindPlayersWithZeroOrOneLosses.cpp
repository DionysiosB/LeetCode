class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
        std::set<int> z, a, m;
        
        for(int p = 0; p < matches.size(); p++){
            int w = matches[p][0];
            int r = matches[p][1];
            if(!a.count(w) && !m.count(w)){z.insert(w);}
            if(z.count(r)){z.erase(r); a.insert(r);}
            else if(a.count(r)){a.erase(r); m.insert(r);}
            else if(!m.count(r)){a.insert(r);}
        }
        
        std::vector<std::vector<int> > v(2);
        for(std::set<int>::iterator it = z.begin(); it != z.end(); it++){v[0].push_back(*it);}
        for(std::set<int>::iterator it = a.begin(); it != a.end(); it++){v[1].push_back(*it);}
        return v;
    }
};
