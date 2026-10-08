class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int cnt(0);
        std::unordered_map<std::string, int> m;
        for(std::string w : words){
            std::string z(w);
            std::reverse(z.begin(), z.end());
            if(m.count(z) && m[z] > 0){
                cnt += 4;
                --m[z];
                if(!m[z]){m.erase(z);}
            }
            else{++m[w];}
        }

        for(std::unordered_map<std::string, int>::iterator it = m.begin(); it != m.end(); it++){
            std::string key = it->first;
            int val = it->second;
            if(!val){continue;}
            if(key[0] == key[1]){cnt += 2; break;}
        }

        return cnt;
    }
};
