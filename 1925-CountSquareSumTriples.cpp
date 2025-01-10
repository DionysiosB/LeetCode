class Solution {
public:
    std::set<int> s;
    Solution(){for(int p = 1; p <= 250; p++){s.insert(p * p);}}
    
    int countTriples(int n) {
        int cnt(0);
        for(int a = 1; a <= n; a++){
            for(int b = 1; b <= 250; b++){
                int tst = a * a + b * b;
                cnt += (tst <= n * n) && s.count(tst);
            }
        }
        
        return cnt;
    }
};
