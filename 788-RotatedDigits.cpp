class Solution {
public:
    int rotatedDigits(int n) {
        
        int cnt(0);
        for(int p = 1; p <= n; p++){
            int x(p);
            std::set<int> ds;
            while(x){ds.insert(x % 10); x /= 10;}
            if(ds.count(3) || ds.count(4) || ds.count(7)){continue;}
            if(!ds.count(2) && !ds.count(5) && !ds.count(6) && !ds.count(9)){continue;}
            ++cnt;
        }

        return cnt;
    }
};
