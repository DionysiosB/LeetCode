class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {

        sort(score.rbegin(), score.rend(), 
        [k](const std::vector<int> &a, const std::vector<int> &b){
            return a[k] < b[k];
        }
        );

        return score;
    }
};
