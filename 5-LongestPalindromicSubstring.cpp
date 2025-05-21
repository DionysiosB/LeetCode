class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        std::string res("");

        for(int p = 0; p < n; p++){
            for(int u = 0; u <= p && p + u < n; u++){
                if(s[p - u] == s[p + u]){
                    int len = 2 * u + 1;
                    if(len > res.size()){res = s.substr(p - u,len);}
                }
                else{break;}
            }
        }

        for(int p = 1; p < n; p++){
            for(int u = 0; u < p && u + p < n; u++){
                if(s[p - 1 - u] == s[p + u]){
                    int len = 2 * (u + 1);
                    if(len > res.size()){res = s.substr(p - 1 - u, len);}
                }
                else{break;}
            }
        }

        return res;
    }
};
