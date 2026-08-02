class Solution {
public:
    int minimumCost(int n, vector<vector<int>>& connections) {

        std::vector<int> dv(n + 1);
        for(int p = 0; p < n; p++){dv[p] = p;}

        sort(connections.begin(), connections.end(), vcomp);

        int total(0), nc(n);
        for(int p = 0; nc > 1 && p < connections.size(); p++){
            int x = connections[p][0];
            int y = connections[p][1];
            int cost = connections[p][2];

            int cx = getLeader(x, dv);
            int cy = getLeader(y, dv);
            if(cx == cy){continue;}
            dv[cx] = cy;
            total += cost;
            --nc;
        }

        return (nc == 1) ? total : -1;
    }

    int getLeader(int node, std::vector<int> &v){
        return (node == v[node]) ? node : (v[node] = getLeader(v[node], v));
    }

    static bool vcomp(std::vector<int> a, std::vector<int> b){
        if(a[2] < b[2]){return true;}
        else if(a[2] == b[2]){
            return (a[0] < b[0]) || (a[0] == b[0] && a[1] < b[1]);
        }
        return false;
    }
};
