class Solution {
public:
    vector<vector<string>> groupStrings(vector<string>& strings) {

        std::vector<std::vector<std::string> > v;
        std::vector<std::vector<int> > w;

        for(std::string s : strings){
            std::vector<int> dv;
            for(size_t p = 1; p < s.size(); p++){
                int diff = (s[p] - s[p - 1] + 26) % 26;
                dv.push_back(diff);
            }

            bool found(false);
            for(int p = 0; !found && p < w.size(); p++){
                const std::vector<int> tv = w[p];
                if(tv.size() != dv.size()){continue;}
                bool same(true);
                for(int u = 0; same && u < dv.size(); u++){if(dv[u] != tv[u]){same = false;}}
                if(same){v[p].push_back(s); found = true;}
            }

            if(!found){
                v.push_back(std::vector<std::string> (1, s));
                w.push_back(dv);
            }

        }

        return v;
        
    }
};
