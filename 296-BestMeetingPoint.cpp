class Solution {
public:
    int minTotalDistance(vector<vector<int>>& grid) {

        std::vector<int> rv, cv;

        for(size_t row = 0; row < grid.size(); row++){
            for(size_t col = 0; col < grid[0].size(); col++){
                if(!grid[row][col]){continue;}
                rv.push_back(row);
                cv.push_back(col);
            }
        }

        sort(rv.begin(), rv.end());
        sort(cv.begin(), cv.end());

        const size_t n = rv.size();
        int rmed = (n % 2 ? rv[n / 2] : (rv[n / 2 - 1] + rv[n / 2]) / 2);
        int cmed = (n % 2 ? cv[n / 2] : (cv[n / 2 - 1] + cv[n / 2]) / 2);

        int total(0);
        for(size_t p = 0; p < n; p++){total += std::abs(rv[p] - rmed) + std::abs(cv[p] - cmed);}
        return total;
    }
};
