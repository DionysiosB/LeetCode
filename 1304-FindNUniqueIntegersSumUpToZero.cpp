class Solution {
public:
    vector<int> sumZero(int n) {
        std::vector<int> v;
        if(n % 2){v.push_back(0);}
        for(int p = 1; p <= n / 2; p++){v.push_back(p); v.push_back(-p);}
        return v;
    }
};
