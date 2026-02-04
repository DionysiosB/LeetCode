class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& v, int m, int n) {
        if((m * n) != v.size()){return std::vector<std::vector<int> >();}
        std::vector<std::vector<int> > w(m, std::vector<int>(n, 0));
        for(long p = 0; p < v.size(); p++){w[p / n][p % n] = v[p];}
        return w;
    }
};
