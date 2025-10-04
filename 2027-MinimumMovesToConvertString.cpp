class Solution {
public:
    int minimumMoves(string s) {
        int cnt(0);
        for(int p = 0; p < s.size(); p++){
            if(s[p] == 'X'){
                s[p] = '0';
                if(p + 1 < s.size()){s[p + 1] = '0';}
                if(p + 2 < s.size()){s[p + 2] = '0';}
                ++cnt;
            }
        }

        return cnt;
    }
};
