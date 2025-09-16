class Solution {
public:
    int smallestCommonElement(vector<vector<int>>& mat) {
        std::set<int> s; for(int p = 0; p < mat[0].size(); p++){s.insert(mat[0][p]);}
        for(int row = 1; row < mat.size(); row++){
            std::set<int> t;
            for(int col = 0; col < mat[row].size(); col++){
                if(s.count(mat[row][col])){t.insert(mat[row][col]);}
            }
            s = t;
        }

        return s.empty() ? -1 : *s.begin();
    }
};
