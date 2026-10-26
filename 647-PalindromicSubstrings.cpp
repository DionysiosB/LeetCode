class Solution {
public:
    int countSubstrings(string s) {

        const int n = s.size();
        int cnt(0);
        for(int p = 0; p < n; p++){
            ++cnt;
            for(int u = 1; u < n; u++){
                if(p - u >= 0 && p + u < n && s[p - u] == s[p + u]){++cnt;}
                else{break;}
            }

            if(p + 1 >= n || s[p] != s[p + 1]){continue;}
            else{++cnt;}
            
            for(int u = 1; u < n; u++){
                if(p - u >= 0 && p + 1 + u < n && s[p - u] == s[p + 1 + u]){++cnt;}
                else{break;}
            }
        }

        return cnt;
    }
};
