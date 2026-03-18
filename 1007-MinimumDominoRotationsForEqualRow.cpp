class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {

        int res(-1);
        for(int d = 1; d <= 6; d++){
            bool possible(true);
            int bc(0), tc(0);
            for(int p = 0; possible && p < tops.size(); p++){
                if(tops[p] == d && bottoms[p] == d){continue;}
                else if(tops[p] == d){++bc;}
                else if(bottoms[p] == d){++tc;}
                else{possible = false;}
            }

            if(!possible){continue;}
            int tst = (bc < tc ? bc : tc);
            res = (res < 0 ? tst : res);
            res = (res < tst ? res : tst);
        }

        return res;
    }
};
