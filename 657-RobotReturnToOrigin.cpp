class Solution {
public:
    bool judgeCircle(string moves) {
        int x(0), y(0);
        for(int p = 0; p < moves.size(); p++){
            x += (moves[p] == 'R') - (moves[p] == 'L');
            y += (moves[p] == 'U') - (moves[p] == 'D');
        }

        return !(x || y);
        
    }
};
