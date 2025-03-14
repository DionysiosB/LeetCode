class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
        int m(0), p(0), g(0);
        int fm(0), fp(0), fg(0);
        for(int idx = 0; idx < garbage.size(); idx++){
            for(int u = 0; u < garbage[idx].size(); u++){
                char x = garbage[idx][u];
                if(x == 'M'){++m; fm = idx;}
                else if(x == 'P'){++p; fp = idx;}
                else if(x == 'G'){++g; fg = idx;}
            }
        }
        
        for(int i = 0; i < travel.size(); i++){
            if(i < fg){g += travel[i];}
            if(i < fp){p += travel[i];}
            if(i < fm){m += travel[i];}
        }
        
        return m + p + g;
    }
};
