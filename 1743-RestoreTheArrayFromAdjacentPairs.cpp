class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& s) {

        std::map<int, std::vector<int> > m;
        for(int p = 0; p < s.size(); p++){
            m[s[p][0]].push_back(s[p][1]);
            m[s[p][1]].push_back(s[p][0]);
        }

        int start(0);
        for(std::map<int, std::vector<int> >::iterator it = m.begin(); it != m.end(); it++){
            if(it->second.size() == 1){start = it->first; break;}
        }

        std::vector<int> v(1, start);
        std::set<int> prev; prev.insert(start);
        for(long p = 0; p < s.size(); p++){
            std::vector<int> w = m[v.back()];
            if(!prev.count(w[0])){v.push_back(w[0]);}
            else if(w.size() > 1){v.push_back(w[1]);}
            prev.insert(v.back());
        }

        return v;
    }
};
