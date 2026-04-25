class Solution {
public:
    vector<int> circularPermutation(int n, int start) {
        std::vector<int> v;
        for(int p = 0; p < (1 << n); p++){v.push_back(start ^ p ^ (p >> 1));}
        return v;
    }
};
