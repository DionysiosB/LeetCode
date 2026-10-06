class Solution {
public:
    vector<long long> maximumCoins(vector<int>& heroes, vector<int>& monsters, vector<int>& coins) {

        const int m = monsters.size();
        std::vector<std::pair<int, long long> > vm(m);
        for(int p = 0; p < m; p++){vm[p].first = monsters[p]; vm[p].second = coins[p];}
        sort(vm.begin(), vm.end());
        
        const int n = heroes.size();
        std::vector<std::pair<int, int> > vh(n);
        for(int p = 0; p < n; p++){vh[p].first = heroes[p]; vh[p].second = p;}
        sort(vh.begin(), vh.end());

        int idx(0); long long cnt(0);
        std::vector<long long> vr(n, 0);
        for(int p = 0; p < n; p++){
            while(idx < m && vh[p].first >= vm[idx].first){cnt += vm[idx].second; ++idx;}
            vr[vh[p].second] = cnt;
        }

        return vr;
    }
};
