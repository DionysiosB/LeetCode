class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        const int N = (1 << n);
        std::vector<std::vector<int>> res;
        for(long p = 0; p < N; p++){
            std::vector<int> v;
            int x(p), d(1);
            while(x){
                if(x % 2){v.push_back(d);}
                ++d; x /= 2;
            }
            if(v.size() == k){res.push_back(v);}
        }

        return res;
    }
};
