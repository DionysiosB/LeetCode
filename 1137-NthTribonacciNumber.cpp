class Solution {
public:
    Solution(){
        v = std::vector<int>(38,0);
        v[1] = 1; v[2] = 1;
        for(int p = 3; p < 38; p++){v[p] = v[p - 3] + v[p - 2] + v[p - 1];}
    }
    int tribonacci(int n) {return v[n];}
    std::vector<int> v;
};
