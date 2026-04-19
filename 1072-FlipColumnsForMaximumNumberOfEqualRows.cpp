class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        
        std::map<std::string, int> m;
        for(int row = 0; row < matrix.size(); row++){
            std::string rs(""), cs("");
            for(int col = 0; col < matrix[row].size(); col++){
                rs += (char)(matrix[row][col] + '0');
                cs += (char)('1' - matrix[row][col]);
            }
            ++m[rs]; ++m[cs];
        }

        int mx(0);
        for(std::map<std::string, int>::iterator it = m.begin(); it != m.end(); it++){
            std::cout << (it->first) << " -> " << (it->second) << std::endl;
            mx = std::max(mx, it->second);
        }     
        return mx;
    }
};
