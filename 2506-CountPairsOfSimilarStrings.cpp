class Solution {
public:
    int similarPairs(vector<string>& words) {

        std::map<std::string, int> m;
        int cnt(0);
        for(int p = 0; p < words.size(); p++){
            std::string cur(26, 0);
            for(int u = 0; u < words[p].size(); u++){
                cur[words[p][u] - 'a'] = 1;
            }

            if(!m.count(cur)){m[cur] = 0;}
            cnt += m[cur]++;
        }

        return cnt;        
    }
};
