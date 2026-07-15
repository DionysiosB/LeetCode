class Solution {
public:
    bool canConstruct(string s, int k) {

        if(s.size() < k){return false;}
        const int B = 26;
        std::vector<int> v(B, 0);
        for(char c: s){v[c - 'a'] = 1 - v[c - 'a'];}
        int singles(0);
        for(int p = 0; p < B; p++){singles += (v[p] % 2);}
        return singles <= k;

    }
};
