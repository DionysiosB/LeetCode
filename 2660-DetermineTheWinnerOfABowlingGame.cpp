class Solution {
public:
    int isWinner(vector<int>& va, vector<int>& vb) {
        int sa(0), sb(0);
        for(int p = 0; p < va.size(); p++){
            sa += va[p] * (1 + ( (p > 0 && va[p - 1] == 10) || (p > 1 && va[p - 2] == 10)) );
            sb += vb[p] * (1 + ( (p > 0 && vb[p - 1] == 10) || (p > 1 && vb[p - 2] == 10)) );
        } 

        if(sa > sb){return 1;}
        else if(sa < sb){return 2;}
        return 0;
    }
};
