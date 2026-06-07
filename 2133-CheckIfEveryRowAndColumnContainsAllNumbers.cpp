class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {

        int n(matrix.size());
        for(int row = 0; row < n; row++){
            std::vector<bool> v(n + 1, 1);
            int total(0);
            for(int col = 0; col < n; col++){
                total += v[matrix[row][col]];
                v[matrix[row][col]] = 0;
            }
            if(total < n){return false;}
        }

        for(int col = 0; col < n; col++){
            std::vector<bool> v(n + 1, 1);
            int total(0);
            for(int row = 0; row < n; row++){
                total += v[matrix[row][col]];
                v[matrix[row][col]] = 0;
            }
            if(total < n){return false;}
        }
        
        return true;
    }
};
