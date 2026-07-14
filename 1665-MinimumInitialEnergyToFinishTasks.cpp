class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {

        std::vector<std::pair<int, std::pair<int, int> > > v(tasks.size());
        int total(0);
        for(size_t p = 0; p < tasks.size(); p++){
            v[p].second.first = tasks[p][0];
            v[p].second.second = tasks[p][1];
            v[p].first = tasks[p][1] - tasks[p][0];
            total += tasks[p][0];
        }

        sort(v.rbegin(), v.rend());
        
        int sofar(0);
        for(size_t p = 0; p < v.size(); p++){
            int cur = sofar + v[p].second.second;
            total = std::max(total, cur);
            sofar += v[p].second.first;
        }

        return total;
    }
};
