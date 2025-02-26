class Solution {
public:
    int maxPower(string s) {
        int start(0), cur(0), mx(0);
        for(int p = 0; p < s.size(); p++){
            if(s[p] != s[start]){
                cur = p - start;
                mx = (mx > cur ? mx : cur);
                start = p;
            }
        }
        
        cur = s.size() - start; mx = (mx > cur ? mx : cur);
        return mx;
    }
};
