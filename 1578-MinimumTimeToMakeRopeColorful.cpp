class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        
        int res(0), ccnt(0), ctotal(0), cmax(0);
        for(int p = 0; p < neededTime.size(); p++){
            if(p == 0 || colors[p - 1] != colors[p]){
                res += (ctotal - cmax);
                ctotal = cmax = ccnt = 0;
            }
            
            ++ccnt;
            ctotal += neededTime[p];
            cmax   = (cmax > neededTime[p] ? cmax : neededTime[p]);
        }

        res += ctotal - cmax;
        return res;

    }
};
