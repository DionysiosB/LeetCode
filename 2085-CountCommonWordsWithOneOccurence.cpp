class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        std::map<std::string, int> a, b;
        for(int p = 0; p < words1.size(); p++){++a[words1[p]];}
        for(int p = 0; p < words2.size(); p++){++b[words2[p]];}
        int cnt(0);
        for(std::map<std::string, int>::iterator it = a.begin(); it != a.end(); it++){
            if(it->second > 1){continue;}
            std::string key = it->first;
            if(b.count(key) && b[key] == 1){++cnt;}
        }

        return cnt;
    }
};
