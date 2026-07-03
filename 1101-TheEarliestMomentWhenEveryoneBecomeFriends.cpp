class Solution {
public:
    int getleader(std::vector<int> &v, int x){
        if(v[x] == x){return x;}
        v[x] = getleader(v, v[x]);
        return v[x];
    }

    int earliestAcq(vector<vector<int>>& logs, int n) {
        sort(logs.begin(), logs.end());
         std::vector<int> v(n);
         for(int p = 0; p < n; p++){v[p] = p;}
         int nc(n);

         for(std::vector<int> log : logs){
            int ts = log[0];
            int x = log[1];
            int y = log[2];

            int lx = getleader(v, x);
            int ly = getleader(v, y);
            if(lx == ly){continue;}
            v[ly] = lx;
            --nc;
            if(nc <= 1){return ts;}
         }

         return -1;
    }
};
