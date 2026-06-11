class Solution {
public:
    int minimumPushes(string word) {

        std::vector<int> f(26, 0);
        for(char x : word){++f[x - 'a'];}
        sort(f.rbegin(), f.rend());
        int total(0);
        for(int p = 0; p < 26; p++){total += f[p] * (1 + p / 8);}
        return total;
    }
};
