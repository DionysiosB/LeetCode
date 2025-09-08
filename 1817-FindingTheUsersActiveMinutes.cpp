class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        std::unordered_map<int, std::set<int> > m;
        for(int p = 0; p < logs.size(); p++){
            const int user = logs[p][0];
            const int time = logs[p][1];
            m[user].insert(time);
        }

        std::vector<int> v(k);
        for(std::unordered_map<int, std::set<int> >::iterator it = m.begin(); it != m.end(); it++){
            std::set<int> as = it->second; 
            int active = as.size();
            ++v[active - 1];
        }

        return v;
    }
};
