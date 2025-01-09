class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n = words.size();
        std::vector<int> v(26, n);
        for(int p = 0; p < n; p++){
            std::vector<int> w(26, 0);
            for(int u = 0; u < words[p].size(); u++){++w[words[p][u] - 'a'];}
            for(int p = 0; p < 26; p++){v[p] = (v[p] < w[p] ? v[p] : w[p]);}
        }
        std::vector<std::string> res;
        for(int p = 0; p < 26; p++){
            for(int u = 0; u < v[p]; u++){
                res.push_back(std::string(1, 'a' + p));
            }
        }
        return res;
    }
};
