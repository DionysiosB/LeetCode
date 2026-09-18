class Solution {
public:

    int f(std::vector<int> &v, int x){
        if(v[x] == x){return x;}
        return v[x] = f(v, v[x]);
    }

    int minCostConnectPoints(vector<vector<int>>& points) {

        const int n = points.size();
        std::vector<std::pair<int, std::pair<int, int> > > w;
        for(int p = 0; p < n; p++){
            for(int q = p + 1; q < n; q++){
                if(q == p){continue;}
                int dist = std::abs(points[p][0] - points[q][0]) + std::abs(points[p][1] - points[q][1]);
                w.push_back(std::make_pair(dist, std::make_pair(p, q)));
            }
        }

        sort(w.begin(), w.end());

        std::vector<int> v(n);
        for(int p = 0; p < n; p++){v[p] = p;}
        int total(0);

        for(int p = 0; p < w.size(); p++){
            int dist = w[p].first;
            int a = w[p].second.first;
            int b = w[p].second.second;

            int fa = f(v, a);
            int fb = f(v, b);
            if(fa == fb){continue;}
            v[fa] = fb;
            total += dist;
        }

        return total;
    }
};
