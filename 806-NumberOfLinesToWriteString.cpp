class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int cur(0), cnt(0);
        for(int p = 0; p < s.size(); p++){
            int w = widths[s[p] - 'a'];
            if(cur + w  > 100){++cnt; cur = 0;}
            cur += w;
        }
        
        cnt += (cur > 0);
        return std::vector<int>({cnt, cur});
    }
};
