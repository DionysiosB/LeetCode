class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        std::map<long, std::vector<std::pair<long, long> > > m;
        for(long p = 0; p < times.size(); p++){
            long from = times[p][0];
            long to   = times[p][1];
            long dur  = times[p][2];
            m[from].push_back(std::make_pair(to, dur));
        }

        std::vector<long> d(n + 1, -1); d[k] = 0;
        std::queue<long> q; q.push(k);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(long p = 0; p < m[node].size(); p++){
                long to  = m[node][p].first;
                long dur = m[node][p].second;
                long tst = d[node] + dur;
                if(d[to] < 0 || tst < d[to]){d[to] = tst; q.push(to);}
            }
        }

        long res(0);
        for(long p = 1; p <= n; p++){
            if(d[p] < 0){return -1;}
            res = (res > d[p] ? res : d[p]);
        }
        return res;
        
    }
};
