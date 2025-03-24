class Solution {
public:
    int divisorSubstrings(int num, int k) {
        
        std::vector<int> v;
        int x(num); while(x){v.push_back(x % 10); x /= 10;}
        std::reverse(v.begin(), v.end());
        
        int cnt(0);
        for(int p = k; p <= v.size(); p++){
            int tst(0);
            for(int q = p - k; q < p; q++){tst = 10 * tst + v[q];}
            if(!tst){continue;}
            cnt += !(num % tst);
        }
        
        return cnt;
    }
};
