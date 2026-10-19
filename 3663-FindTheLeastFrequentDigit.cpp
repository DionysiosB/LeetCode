class Solution {
public:
    int getLeastFrequentDigit(int n) {
        
        std::vector<int> f(10, 0);
        while(n){++f[n % 10]; n /= 10;}
        int mnf(50), mnd(-1);
        for(int p = 0; p < 10; p++){
            if(0 < f[p] && f[p] < mnf){mnd = p; mnf = f[p];}
        }

        return mnd;
    }
};
