class Solution {
public:

    void findtime(std::map<int, std::vector<int>> &m, std::vector<int> &time, std::vector<int> &dv, int idx){
        if(dv[idx] > 0){return;}
        std::vector<int> prevnodes = m[idx];
        int start(0);
        std::cout << prevnodes.size() << std::endl;
        for(int p = 0; p < prevnodes.size(); p++){
            int pnode = prevnodes[p];
            findtime(m, time, dv, pnode);
            start = (start > dv[pnode] ? start : dv[pnode]);
        }
        dv[idx] = start + time[idx];
    }

    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {

        std::vector<int> vt(n, 0);
        std::map<int, std::vector<int> > mprev;
        for(long p = 0; p < relations.size(); p++){
            int before = relations[p][0] - 1;
            int after = relations[p][1] - 1;
            mprev[after].push_back(before);
        }

        int done(0);
        for(int p = 0; p < n; p++){
            findtime(mprev, time, vt, p);
            done = (done > vt[p] ? done : vt[p]);
        }

        return done;
    }
};
