class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int cnt(0), pos(0), mxpos(0);
        for(int p = 0; p < moves.size(); p++){
            cnt += (moves[p] == '_');
            pos += (moves[p] == 'R') - (moves[p] == 'L');
        }
        
        int tst = pos + (pos > 0 ? cnt : -cnt);
        return (tst > 0 ? tst : -tst);
    }
};
