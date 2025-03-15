class Solution {
public:
    vector<int> minOperations(string boxes) {
        
        int n = boxes.size();
        std::vector<int> b(n);
        for(int p = 0; p < n; p++){b[p] = (boxes[p] == '1');}
        
        std::vector<int> v(n, 0);
        int cur(b[0]); for(int p = 1; p < n; p++){v[p] = v[p - 1] + cur; cur += b[p];}
        std::vector<int> w(n, 0);
        cur = b.back(); for(int p = n - 2; p >= 0; p--){w[p] = w[p + 1] + cur; cur += b[p];}
        
        for(int p = 0; p < n; p++){v[p] += w[p];}
        return v;
    }
};
