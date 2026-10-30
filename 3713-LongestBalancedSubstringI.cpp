class Solution {
public:

    bool check(std::vector<int> v){
        int prev(0);
        for(int x : v){
            if(!x){continue;}
            else if(!prev){prev = x;}
            else if(x != prev){return false;}
        }
        return true;
    }

    int longestBalanced(string s) {

        const int B = 26;

        int mxlen(0);
        for(int start = 0; start < s.size(); start++){
            std::vector<int> f(B, 0);
            for(int p = start; p < s.size(); p++){
                ++f[s[p] - 'a'];
                if(!check(f)){continue;}
                int len = p - start + 1;
                mxlen = (mxlen > len ? mxlen : len);
            }
        }

        return mxlen;
    }
};
