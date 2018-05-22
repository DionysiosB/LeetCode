class Solution {
public:
    long trap(std::vector<int> a) {
        
        int n = a.size();
        if(n <= 0){return 0;}
        std::vector<int> lm(n, a[0]);
        std::vector<int> rm(n, a.back());

        for(int p = 1; p < n; p++){lm[p] = (lm[p - 1] > a[p]) ? lm[p - 1] : a[p];}
        for(int p = n - 2; p >= 0; p--){rm[p] = (rm[p + 1] > a[p]) ? rm[p + 1] : a[p];}
        
        long total(0);
        for(int p = 0; p < n; p++){
            int cm = (lm[p] < rm[p]) ? lm[p] : rm[p];
            total += cm - a[p];
        }
        
        return total;
    }
};
