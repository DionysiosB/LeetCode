class Solution {
public:
    int findSubstringInWraproundString(string s) {
        
        std::vector<int> v(26, 0); v[s[0] - 'a'] = 1;
        int cur(1), cnt(1);
        for(int p = 1; p < s.size(); p++){
            int key = s[p] - 'a';
            if(key != (s[p - 1] - 'a' + 1)%26) {cur = 1;}
            else{++cur;}
            if(v[key] < cur){cnt += cur - v[key]; v[key] = cur;}
        }
        
        return cnt;
    }
};
