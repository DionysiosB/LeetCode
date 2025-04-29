class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        
        std::vector<int> res(s.size(), 0);
        for(int start = 0; start < s.size(); start++){
            int row(startPos[0]), col(startPos[1]), cnt(0);
            for(int p = start; p < s.size(); p++){
                row += (s[p] == 'U' ? -1 : (s[p] == 'D' ? 1 : 0));
                col += (s[p] == 'R' ? 1 : (s[p] == 'L' ? -1 : 0));
                if(row < 0 || col < 0 || row >= n || col >= n){break;}
                ++cnt;
            }
            res[start] = cnt;
        }
        
        return res;
    }
};
