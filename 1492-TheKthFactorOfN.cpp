class Solution {
public:
    int kthFactor(int n, int k) {
        std::vector<int> a, b;
        a.push_back(1); b.push_back(n);
        for(long p = 2; p * p <= n; p++){
            if(n % p){continue;}
            a.push_back(p);
            if(p * p < n){b.push_back(n / p);}
        }

        if(a.size() + b.size() < k){return -1;}
        else if(a.size() >= k){return a[k - 1];}
        else{return b[b.size() - (k - a.size())];}

    }
};
