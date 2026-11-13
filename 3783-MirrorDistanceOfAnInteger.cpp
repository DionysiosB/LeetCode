class Solution {
public:
    int mirrorDistance(int n) {

        std::vector<int> v;
        long m(n); while(m){v.push_back(m % 10); m /= 10;}
        for(int p = 0; p < v.size(); p++){m = 10 * m + v[p];}
        return std::abs(m - n);
    }
};
