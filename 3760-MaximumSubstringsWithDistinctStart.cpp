class Solution {
public:
    int maxDistinct(string s) {
        const int B = 26;
        bool v[B] = {0};
        int cnt(0);
        for(char x : s){
            cnt += (1 - v[x - 'a']);
            v[x - 'a'] = 1;
        }

        return cnt;
    }
};
