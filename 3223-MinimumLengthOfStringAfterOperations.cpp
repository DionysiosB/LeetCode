class Solution {
public:
    int minimumLength(string s) {
        std::vector<int> v(26, 0);
        for(char x : s){++v[x -  'a'];}
        int cnt(0);
        for(int x : v){cnt += (x > 0) * (2 - (x % 2));}
        return cnt;
    }
};
