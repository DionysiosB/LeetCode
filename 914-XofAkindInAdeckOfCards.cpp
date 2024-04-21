int gcd(int a, int b){return (b == 0) ? a : gcd(b, a % b);}

class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        std::map<int, int> m;
        for(int p = 0; p < deck.size(); p++){++m[deck[p]];}

        int cnt(0);
        for(std::map<int, int>::iterator it = m.begin(); it != m.end(); it++){
            int cur = it->second;
            cnt = gcd(cur, cnt);
            if(cnt <= 1){return false;}
        }

        return true;
    }
};
