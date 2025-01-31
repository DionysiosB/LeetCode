class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int cnt(0);
        for(int col = 0; col < strs[0].size(); col++){
            bool sorted(true);
            for(int row = 1; sorted && row < strs.size(); row++){
                if(strs[row][col] < strs[row - 1][col]){sorted = false;}
            }
            cnt += !sorted;
        }
        
        return cnt;
    }
};
