class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        std::vector<long long> deg(n);
        for(int p = 0; p < roads.size(); p++){
            ++deg[roads[p][0]];
            ++deg[roads[p][1]];
        }

        sort(deg.begin(), deg.end());
        long long total(0);
        for(long long p = 0; p < n; p++){total += (p + 1) * deg[p];}
        return total;
    }
};
