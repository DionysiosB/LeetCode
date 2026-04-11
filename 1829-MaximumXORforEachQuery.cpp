class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {

        std::vector<int> v = nums;
        for(int p = 1; p < v.size(); p++){v[p] ^= v[p - 1];}

        for(int p = 0; p < v.size(); p++){
            int w(0);
            for(int b = 0; b < maximumBit; b++){
                if(v[p] % 2 == 0){w += (1 << b);}
                v[p] /= 2;
            }
            v[p] = w;
        }
        std::reverse(v.begin(), v.end());
        return v;
    }
};
