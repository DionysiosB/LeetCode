class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        
        std::vector<int> sv(days.size(), -1);
        int idxw(0), idxm(0);
        for(size_t p = 0; p < sv.size(); p++){
            int day = days[p];

            sv[p] = costs[0] + (p ? sv[p - 1] : 0);

            while(days[idxw] + 7 <= day){++idxw;}
            int cur = costs[1] + (idxw ? sv[idxw - 1] : 0);
            sv[p] = (cur < sv[p] ? cur : sv[p]);

            while(days[idxm] + 30 <= day){++idxm;}
            cur = costs[2] + (idxm ? sv[idxm - 1] : 0);
            sv[p] = (cur < sv[p] ? cur : sv[p]);
        }

        return sv.back();
    }
};
