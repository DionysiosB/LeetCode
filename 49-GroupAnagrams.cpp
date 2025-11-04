class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> m;
        for(int p = 0; p < strs.size(); p++){
            std::string x(strs[p]);
            sort(x.begin(), x.end());
            m[x].push_back(strs[p]);
        }

        std::vector<std::vector<std::string> > v;
        for(std::unordered_map<std::string, std::vector<std::string> >::iterator it = m.begin(); it != m.end(); it++){
            v.push_back(it->second);
        }
        return v;
    }
};
