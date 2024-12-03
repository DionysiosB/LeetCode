class Solution {
public:
    int countKeyChanges(string s) {
        int cnt(0);
        const int D = 'a' - 'A';
        for(int p = 1; p < s.size(); p++){
            int diff = s[p] - s[p - 1];
            diff = (diff > 0 ? diff : -diff);
            if(diff > 0 && diff != D){++cnt;}
        }

        return cnt;
    }
};
