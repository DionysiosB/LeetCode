class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {

        std::map<int, std::vector<int> > m;
        for(int p = 0; p < groupSizes.size(); p++){m[groupSizes[p]].push_back(p);}

        std::vector<std::vector<int> > ans;
        for(std::map<int, std::vector<int> >::iterator it = m.begin(); it != m.end(); it++){
            int len = it->first;
            std::vector<int> v = it->second;
            for(int p = 0; p < v.size() / len; p++){
                std::vector<int> cur;
                for(int u = 0; u < len; u++){cur.push_back(v[len * p + u]);}
                ans.push_back(cur);
            }
        }

        return ans;
    }
};
