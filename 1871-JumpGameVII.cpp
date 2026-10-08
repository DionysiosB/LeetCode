class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {

        const int n = s.size();
        std::vector<bool> v(n, 0);
        v[0] = 1;
        int prev(0);
        for(int p = 0; p < n; p++){
            if(s[p] == '1' || !v[p]){continue;}
            for(int q = std::max(prev, p + minJump); q <= std::min(p + maxJump, n - 1); q++){
                if(s[q] == '1'){continue;}
                prev = q;
                v[q] = 1;
            }
        }
        
        return v.back();
    }
};
