class Solution {
public:
    long long sumDigitDifferences(vector<int>& nums) {

        const int n = nums.size();
        std::unordered_map<int, std::vector<long long> > m;
        for(int p = 0; p <= 10; p++){
            std::vector<long long> v(10, 0);
            m[p] = v;
        }
        
        for(int x : nums){
            for(int p = 0; p <= 10; p++){
                int d = x % 10;
                ++m[p][d];
                x /= 10;
            }
        }

        long long total(0);
        for(int p = 0; p <= 10; p++){
            std::vector<long long> v = m[p];
            for(int u = 0; u < 10; u++){
                total += v[u] * (n - v[u]);
            }
        }

        return total / 2;
    }
};
